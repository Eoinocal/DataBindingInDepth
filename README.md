# DataBindingInDepth with WinUI 3 on Desktop
WinUI 3 Desktop project demonstranting DataBindingInDepth

If you follow the [Data binding in depth](https://docs.microsoft.com/en-us/windows/uwp/data-binding/data-binding-in-depth) from Microsoft,
starting from a WinUI 3 Desktop project, the App will compile and appear to work until you call

    ViewModel().NextButtonText(L"Updated Next button text");
	
at that point the App will throw a 

    WinRT originate error - 0x8001010E : 'The application called an interface that was marshalled for a different thread.'.
	
The cause of the error is a namespace one. In `HostViewModel.idl` you should use `Microsoft.UI.Xaml.Data.INotifyPropertyChanged` not `Windows.UI.....`

The hope for this repository is to document the issue and provide a sample working project.
