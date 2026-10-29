__int64 sub_ACB0()
{
  if ( under_debugger )
    BUG();
  interr();
  if ( (void (*)())MEMORY[0x12000000C2000030] != nullsub_2 )
    MEMORY[0x12000000C2000030](3341);
  return 1;
}

