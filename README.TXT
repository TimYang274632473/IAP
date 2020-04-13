测试思路：
IAP功能需要一个Bootload+一个APP。
BOOT作为引导实现上电启动后程序跳转到APP。
BOOT和APP都通过偏移section下载至flash。
BOOT启动收设置中断向量表偏移至APP的启动section，
然后执行跳转到APP的RESET的中断入口实现APP启动。

			
			
			
			
			
			
			
			
			