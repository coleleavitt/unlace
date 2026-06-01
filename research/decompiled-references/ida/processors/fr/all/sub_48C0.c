__int64 __fastcall sub_48C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  char v5; // r12
  unsigned __int64 *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  char v10; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v11 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 >= v4 && v3 < *(_DWORD *)(v2 + 108) && (*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8) & 1) != 0 )
  {
    v5 = 0;
    if ( (*(_BYTE *)(a2 + 28) & 1) == 0 )
      goto LABEL_25;
  }
  v7 = (unsigned __int64 *)&v10;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( v7 != &v11 );
  v5 = 1;
  if ( decode_prev_insn() == -1
    || (v8 = *(_QWORD *)(a1 + 16), v9 = *(_DWORD *)(v8 + 104), v9 > 0)
    || *(int *)(v8 + 108) <= 0
    || (*(_BYTE *)(*(_QWORD *)(v8 + 112) + 16LL * -v9 + 8) & 1) == 0 )
  {
LABEL_25:
    if ( *(_BYTE *)(a2 + 41) )
      goto LABEL_18;
LABEL_6:
    if ( *(_BYTE *)(a2 + 81) )
      goto LABEL_19;
LABEL_7:
    if ( *(_BYTE *)(a2 + 121) )
      goto LABEL_20;
LABEL_8:
    if ( *(_BYTE *)(a2 + 161) )
      goto LABEL_21;
    goto LABEL_9;
  }
  v5 = 1;
  if ( !*(_BYTE *)(a2 + 41) )
    goto LABEL_6;
LABEL_18:
  sub_4240(a2, a2 + 40);
  if ( !*(_BYTE *)(a2 + 81) )
    goto LABEL_7;
LABEL_19:
  sub_4240(a2, a2 + 80);
  if ( !*(_BYTE *)(a2 + 121) )
    goto LABEL_8;
LABEL_20:
  sub_4240(a2, a2 + 120);
  if ( *(_BYTE *)(a2 + 161) )
  {
LABEL_21:
    sub_4240(a2, a2 + 160);
    if ( v5 )
      goto LABEL_22;
    return 1;
  }
LABEL_9:
  if ( v5 )
LABEL_22:
    add_cref();
  return 1;
}

