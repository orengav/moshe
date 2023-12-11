Action()
{
	lr_start_transaction("aa");
	
	lr_end_transaction("aa", LR_AUTO);


	return 0;
}
