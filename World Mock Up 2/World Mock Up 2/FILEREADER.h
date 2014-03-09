/*
COPYRIGHT COLE WILLISON 25/02/2014
THIS SOFTWARE IS INTENDED FOR OPEN SOURCE USE, REDISTRIBUTION
IS ENCOURAGE

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR 
OTHER DEALINGS IN THE SOFTWARE.
*/
#ifndef FILE_READER
#define FILE_READER

#include "COLLECTIONS.h"

class FileReader
{
public:
	FileReader(string fileName);
	vector<vector<int>> getMap(void);
	int getX(void);
	int getY(void);
	void print2dIntVector(vector<vector<int>> vec2d);

private:
	vector<int> removeSlashAndParse(string line);
	vector<vector<int>> currentMap;
	string fileName;

};

#endif