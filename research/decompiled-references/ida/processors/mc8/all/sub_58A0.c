__int64 __fastcall sub_58A0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD); // rax
  _QWORD *v3; // rdi

  *(_BYTE *)(a2 + 125) = 0;
  *(_BYTE *)(a2 + 85) = 0;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 32) = 0;
  *(_WORD *)(a2 + 152) = 0;
  *(_WORD *)(a2 + 112) = 0;
  *(_WORD *)(a2 + 72) = 0;
  v2 = *(__int64 (__fastcall **)(_QWORD))(a1 + 3000);
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 3008) + a1);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    v2 = *(__int64 (__fastcall **)(_QWORD))((char *)v2 + *v3 - 1);
  return v2(v3);
}

