char *mx_strncpy(char *dst, const char *src, int len){
	if (len > 0) {
		char *destptr = dst;
		const char *srcptr = src;
		do {
			if ((*destptr++ = *srcptr++) == 0) {
				while (--len != 0) {
				*destptr++ = 0;
			}
				break;
			}
		} while (--len != 0);
		
		return dst;	
	}
}
