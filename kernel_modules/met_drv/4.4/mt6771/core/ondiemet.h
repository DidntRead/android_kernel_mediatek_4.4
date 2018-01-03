#ifndef __ONDIEMET_H
#define __ONDIEMET_H

#include "ondiemet_log.h"

extern void ondiemet_extract(void);
extern void ondiemet_stop(void);
extern void ondiemet_start(void);

#define ONDIEMET_SSPM  0
#define ONDIEMET_NUM  3		/* total number of supported */
extern unsigned int ondiemet_module[];
extern void sspm_start(void);
extern void sspm_stop(void);
extern void sspm_extract(void);
extern int sspm_attr_init(struct device *dev);
extern int sspm_attr_uninit(struct device *dev);

extern int ondiemet_attr_init(struct device *dev);
extern int ondiemet_attr_uninit(struct device *dev);

#endif				/* __ONDIEMET_H */
