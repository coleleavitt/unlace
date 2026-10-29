__int64 __fastcall sub_72A0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rbp
  char v8[1032]; // [rsp+2h] [rbp-448h] BYREF
  unsigned __int64 v9; // [rsp+40Ah] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v5 = qstpncpy();
  if ( (unsigned int)(a4 + 1) > 1 && (unsigned __int8)qctime_utc() )
  {
    v8[strlen(v8) - 1] = 0;
  }
  else if ( v5 - (__int64)v8 > 2 )
  {
    *(_BYTE *)(v5 - 2) = 0;
  }
  set_cmt();
  create_data();
  return *(_QWORD *)(a1 + 16) & (a2 + 4);
}

