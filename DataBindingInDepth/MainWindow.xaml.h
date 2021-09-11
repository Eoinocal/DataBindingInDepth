#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "MainWindow.g.h"
#include "HostViewModel.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::DataBindingInDepth::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        DataBindingInDepth::HostViewModel ViewModel();

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);

    private:
        DataBindingInDepth::HostViewModel m_viewModel;
    };
}

namespace winrt::DataBindingInDepth::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
