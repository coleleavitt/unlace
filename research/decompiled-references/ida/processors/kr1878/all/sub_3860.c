__int64 __fastcall sub_3860(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 184) + 1LL) = 5;
  *(_BYTE *)(*(_QWORD *)(a1 + 184) + 5LL) = 1;
  v3 = *(_QWORD *)(a1 + 184);
  if ( (a3 & 0x10) != 0 )
    *(_QWORD *)(v3 + 8) = (unsigned __int8)(16 * a3);
  else
    *(_QWORD *)(v3 + 8) = a3 & 0xF;
  return 1;
}

