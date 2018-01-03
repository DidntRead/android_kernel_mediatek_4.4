#ifndef MET_KERNEL_SYMBOL
#define MET_KERNEL_SYMBOL

/*lookup symbol*/
#include <linux/kallsyms.h>
#include <linux/printk.h>
#include <linux/perf_event.h>
#include <linux/kthread.h>

extern void (*tracing_record_cmdline_symbol)(struct task_struct *tsk);
extern void met_cpu_frequency(unsigned int frequency, unsigned int cpu_id);
extern void (*met_cpu_frequency_symbol)(unsigned int frequency, unsigned int cpu_id);
extern void (*met_arch_setup_dma_ops_symbol)(struct device *dev);
extern u64 (*met_perf_event_read_local_symbol)(struct perf_event *ev);
extern struct task_struct *(*met_kthread_create_on_cpu_symbol)(int (*threadfn)(void *data),
				void *data, unsigned int cpu,
				const char *namefmt);

extern void met_tracing_record_cmdline(struct task_struct *tsk);
extern int met_reg_switch(void);
extern int (*met_reg_switch_symbol)(void);
extern void met_unreg_switch(void);
extern void (*met_unreg_switch_symbol)(void);
extern void met_arch_setup_dma_ops(struct device *dev);
extern u64 met_perf_event_read_local(struct perf_event *ev);
extern struct task_struct *met_kthread_create_on_cpu(int (*threadfn)(void *data),
				void *data, unsigned int cpu,
				const char *namefmt);

#endif	/* MET_KERNEL_SYMBOL */
