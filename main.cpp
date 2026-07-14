#include <iostream>
#include <cstdlib>
#include <string>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int main()
{
    string input;
    cout<<"Please enter your file path" << endl;
    getline(cin,input);
    fs::path inputPath(input);

    string folder = inputPath.parent_path().string();
    string filename = inputPath.stem().string();

    cout << "The folder containing the video is: " << folder << endl;
    cout<< "The video's name without an extension is: " << filename <<endl;

    string output = folder + "/" + filename + "_davinci.mov";

    string command = "ffmpeg -i \"" + input + "\" -c:v prores -profile:v 0 -c:a pcm_s16le -y \"" + output + "\"";
    cout<<command<<endl;

    system(command.c_str());

}
