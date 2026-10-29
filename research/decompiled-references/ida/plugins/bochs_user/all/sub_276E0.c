__int64 __fastcall sub_276E0(__int64 a1, char a2)
{
  __int64 v3; // rdi
  _QWORD v5[77]; // [rsp+0h] [rbp-268h] BYREF

  v5[75] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( !*(_DWORD *)(v3 + 24) )
    return 7;
  if ( a2 && !(unsigned __int8)sub_412D0(v3, 0) )
  {
    if ( *(_BYTE *)a1 )
      goto LABEL_22;
    *(_DWORD *)(a1 + 48) = 4;
    if ( (unsigned __int8)sub_41740(*(_QWORD *)(a1 + 8)) )
      sub_27640(a1, v5);
    if ( *(_BYTE *)a1 )
    {
LABEL_22:
      if ( !(unsigned __int8)sub_412D0(*(_QWORD *)(a1 + 8), 0) && !(unsigned int)sub_266F0(a1, (__int64)"q\n\n", 22) )
        sub_412D0(*(_QWORD *)(a1 + 8), 3000);
    }
  }
  if ( *(_QWORD *)(a1 + 56) )
  {
    qsem_free();
    *(_QWORD *)(a1 + 56) = 0;
  }
  if ( *(_QWORD *)(a1 + 64) )
  {
    qsem_free();
    *(_QWORD *)(a1 + 64) = 0;
  }
  sub_41300(*(_QWORD *)(a1 + 8));
  if ( *(_QWORD *)(a1 + 128) )
  {
    qfclose();
    *(_QWORD *)(a1 + 128) = 0;
  }
  return 0;
}

