#include "pch.h"
#include "HostViewModel.h"
#include "HostViewModel.g.cpp"


namespace winrt::DataBindingInDepth::implementation
{
    hstring HostViewModel::NextButtonText()
    {
        return hstring{ m_nextButtonText };
    }

    void HostViewModel::NextButtonText(hstring const& value)
    {
        if (m_nextButtonText != value)
        {
            m_nextButtonText = value;
            m_propertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs{ L"NextButtonText" });
        }
    }

    winrt::event_token HostViewModel::PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
        return m_propertyChanged.add(handler);

    }

    void HostViewModel::PropertyChanged(winrt::event_token const& token) noexcept
    {
        m_propertyChanged.remove(token);
    }
}
