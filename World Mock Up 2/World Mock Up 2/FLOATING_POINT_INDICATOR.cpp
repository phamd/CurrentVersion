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
#ifndef FLOATING_POINT_INDICATOR_METHODS
#define FLOATING_POINT_INDICATOR_METHODS

#include "FLOATING_POINT_INDICATOR.h"

doubleIndicator::doubleIndicator(void)
{
	position = new int[2];
	size = new int[2];
}

double doubleIndicator::getIndicator(void) const {return value;}
void doubleIndicator::setIndicator(double newValue) {value = newValue;}
#endif