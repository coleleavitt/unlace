unsigned __int64 __fastcall sub_18FA70(unsigned int a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 > 3 )
  {
    if ( !unk_2439A0 )
      sub_198E10(480);
    BUG();
  }
  result = __readfsqword(0);
  *(_QWORD *)(result + 8LL * (int)a1 - 256) = a2;
  return result;
}
