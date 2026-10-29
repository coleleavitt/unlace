_QWORD *__fastcall sub_76540(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v6 = operator new(0x58u);
  if ( !a4 )
    a4 = a2[5];
  v7 = a2[4];
  v8 = a2[3];
  *(_QWORD *)(v6 + 8) = a2[1];
  v9 = a2[2];
  *(_QWORD *)(v6 + 40) = a4;
  *(_QWORD *)v6 = off_B22E0;
  *(_QWORD *)(v6 + 16) = v9;
  *(_QWORD *)(v6 + 24) = v8;
  *(_QWORD *)(v6 + 32) = v7;
  *(_BYTE *)(v6 + 80) = 1;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = -1;
  *(_BYTE *)(v6 + 80) = sub_76280((__m128i *)v6, a3);
  *a1 = v6;
  return a1;
}

