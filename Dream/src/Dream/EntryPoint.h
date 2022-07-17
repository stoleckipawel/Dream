#pragma once

#ifdef DM_PLATFORM_WINDOWS

extern Dream::Application* Dream::CreateApplication();

int main(int argc, char** argv)
{
    printf("Dream Engine");
    auto app = Dream::CreateApplication();
    app->Run();
    delete app;
}
#endif