/* ============================================================
* Date        : 2009-08-26
* Description : Preview image viewer.
*
* SPDX-FileCopyrightText: 2008-2012 Kåre Särs <kare.sars@iki .fi>
*
* SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License.
* along with this program.  If not, see <http://www.gnu.org/licenses/>
*
* ============================================================ */

#ifndef IMAGE_VIEWER_H
#define IMAGE_VIEWER_H

#include <QGraphicsView>
#include <QWheelEvent>

class ImageViewer : public QGraphicsView
{
    Q_OBJECT
public:
    explicit ImageViewer(QWidget *parent = nullptr);
    ~ImageViewer();

    void setQImage(QImage *img);

public Q_SLOTS:
    void zoomIn();
    void zoomOut();
    void zoom2Fit();
    void zoomActualSize();

protected:
    void wheelEvent(QWheelEvent *e) Q_DECL_OVERRIDE;
    void drawBackground(QPainter *painter, const QRectF &rect) Q_DECL_OVERRIDE;

private:
    struct Private;
    Private *const d;

};

#endif

