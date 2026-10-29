__int64 __fastcall sub_E8FB0(__int64 a1, int a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r12
  _BYTE *v5; // rcx
  int v6; // ebp
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(unsigned __int8 *)(a1 + 9);
  v4 = *(_QWORD *)(a1 + 80);
  v5 = (_BYTE *)(v4 + v3);
  if ( (*(_BYTE *)(v2 + 40) & 0xC) != 0 )
    v5 = memset((void *)(v4 + v3), 0, *(_DWORD *)(v2 + 56) - (unsigned int)(unsigned __int8)v3);
  *v5 = a2;
  *(_DWORD *)(v4 + v3 + 1) = 0;
  *(_BYTE *)(v4 + v3 + 7) = 0;
  v6 = v3 + ((a2 & 8) == 0 ? 4 : 0) + 8;
  *(_BYTE *)(v4 + v3 + 5) = BYTE1(*(_DWORD *)(v2 + 56));
  *(_BYTE *)(v4 + v3 + 6) = *(_DWORD *)(v2 + 56);
  *(_DWORD *)(a1 + 20) = (unsigned __int16)(*(_WORD *)(v2 + 56) - (v3 + ((a2 & 8) == 0 ? 4 : 0) + 8));
  sub_E8E80(a1, a2);
  *(_WORD *)(a1 + 18) = v6;
  v7 = *(unsigned int *)(v2 + 52);
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 96) = v4 + (__int16)v6;
  *(_QWORD *)(a1 + 88) = v4 + v7;
  *(_QWORD *)(a1 + 104) = *(unsigned __int8 *)(a1 + 10) + v4;
  LODWORD(v7) = *(_DWORD *)(v2 + 52);
  *(_BYTE *)a1 = 1;
  *(_WORD *)(a1 + 26) = v7 - 1;
  *(_WORD *)(a1 + 24) = 0;
  return 0;
}
