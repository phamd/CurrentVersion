/*
COPYRIGHT BENJAMIN ISHERWOOD 25/02/2014
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
#ifndef _ITEMS
#define _ITEMS

#include "SYSTEMCOLLECTIONS.h"

class item
{
private:
	unsigned int ID;
	unsigned int value;
	unsigned int whieght;
	unsigned int quantity;
	string bitMapName;
	itemType itemClass;

public:
	item(void);
	item(unsigned int newID, unsigned int initValue, unsigned int initCost, itemType newType);

	unsigned int getValue(void) const;
	unsigned int getWhieght(void) const;
	unsigned int getID(void) const;
	int decreaseQuantity(void);
	itemType getClass(void);
	string getBitmapName(void);

	void increaseQuantity(void);
};

#endif