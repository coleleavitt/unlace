unsigned __int64 __fastcall sub_19CBE0(__int64 a1, _QWORD *a2)
{
  int v2; // r12d
  __int64 v3; // rbp
  _QWORD v5[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 8) - 1;
  if ( v2 >= 0 )
  {
    v3 = 8LL * (unsigned int)v2;
    do
    {
      sub_1240C0((__int64)v5, *(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)a1 + v3), 0);
      if ( (unsigned __int8)sub_64180(v5, a2) || (unsigned __int8)sub_318830(v6, a2 + 2) )
      {
        memmove(
          (void *)(v3 + *(_QWORD *)a1),
          (const void *)(v3 + *(_QWORD *)a1 + 8),
          8LL * *(_QWORD *)(a1 + 8) - 8 - v3);
        --*(_QWORD *)(a1 + 8);
      }
      if ( v6[0] )
      {
        v6[1] = 0;
        qfree();
      }
      --v2;
      v3 -= 8;
      qfree();
    }
    while ( v2 != -1 );
  }
  return v7 - __readfsqword(0x28u);
}

