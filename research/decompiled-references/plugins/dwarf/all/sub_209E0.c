__int64 __fastcall sub_209E0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a3 + 4);
  if ( (unsigned int)v5 <= 0xB )
  {
    v6 = 2645;
    if ( _bittest64(&v6, v5) )
    {
      sub_20930((__int64)v9, a1 + 80, v5);
      sub_17110((__int64)"Illegal type %s of the string table section\n");
      if ( v9[0] )
      {
        v9[1] = 0;
        qfree(v9[0]);
      }
      return v10 - __readfsqword(0x28u);
    }
  }
  v7 = *(_QWORD *)(a3 + 24);
  if ( !v7 )
    return sub_17110((__int64)"Illegal offset of the string table section\n");
  if ( *a2 <= 0 || !a2[2] )
    goto LABEL_9;
  if ( *a2 == v7 )
    return v10 - __readfsqword(0x28u);
  if ( a4 )
  {
    sub_17040();
    v7 = *(_QWORD *)(a3 + 24);
LABEL_9:
    *a2 = v7;
    a2[1] = *(_QWORD *)(a3 + 16);
    a2[2] = *(_QWORD *)(a3 + 32);
    return v10 - __readfsqword(0x28u);
  }
  return sub_17040();
}
