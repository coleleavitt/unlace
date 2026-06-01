// write access to const memory has been detected, the output may be wrong!
__int64 (__fastcall **sub_55A0())()
{
  __int64 (__fastcall **result)(); // rax

  if ( under_debugger )
    BUG();
  interr(10260);
  result = off_9A58;
  loc_2814 = off_9A58;
  if ( loc_283C )
  {
    *(_QWORD *)((char *)&loc_2841 + 3) = 0;
    result = (__int64 (__fastcall **)())qfree(loc_283C);
  }
  if ( *(_QWORD *)((char *)&loc_2823 + 1) )
  {
    loc_282C = 0;
    return (__int64 (__fastcall **)())qfree(*(_QWORD *)((char *)&loc_2823 + 1));
  }
  return result;
}
