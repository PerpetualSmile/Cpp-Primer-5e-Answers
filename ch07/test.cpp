#include <sapi.h>
#include <sphelper.h>
#pragma commment(lib, "sapi.lib")

int main() {
    ISpVoice *pSpVoice;
    ::CoInitialize(NULL);
    CoCreateInstance(CLSID_SpVoice,
        NULL,
        CLSCTX_INPROC_SERVER,
        IID_ISpVoice,
        (void **) &pSpVoice
    );
    pSpVoice->SetVolume(80);
    pSpVoice->Speak(TEXT("abc"), SPF_ASYNC, NULL);
    pSpVoice->Release();
    ::CoUninitialize();
    return 0;
}