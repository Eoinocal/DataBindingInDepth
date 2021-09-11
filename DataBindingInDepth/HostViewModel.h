#pragma once
#include "HostViewModel.g.h"


namespace winrt::DataBindingInDepth::implementation
{
    struct HostViewModel : HostViewModelT<HostViewModel>
    {
        HostViewModel() : m_nextButtonText{ L"Next" } {}

        hstring NextButtonText();
        void NextButtonText(hstring const& value);

        winrt::event_token PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

    private:
        std::wstring m_nextButtonText;
        winrt::event<Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}
namespace winrt::DataBindingInDepth::factory_implementation
{
    struct HostViewModel : HostViewModelT<HostViewModel, implementation::HostViewModel>
    {
    };
}
