__int64 __fastcall sub_12A970(__int64 a1, unsigned __int64 *a2, __int64 a3, double a4)
{
  unsigned int v5; // r15d
  _DWORD *v7; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rsi
  char v15; // al
  __int16 v16; // ax
  __int16 v17; // dx
  __int16 v18; // ax
  int v19; // eax
  __int64 v20; // rax
  unsigned __int8 *v21; // rbx
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // [rsp+Ch] [rbp-5Ch]
  int v26; // [rsp+10h] [rbp-58h] BYREF
  int v27; // [rsp+14h] [rbp-54h]
  __int64 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 10 )
    return 0;
  if ( *(_BYTE *)(a1 + 32) != 4 )
    return 0;
  v7 = *(_DWORD **)(a1 + 40);
  if ( (unsigned int)(*v7 - 23) > 1 )
    return 0;
  v5 = sub_152630((__int64)v7, &v26);
  if ( !(_BYTE)v5 || (v26 & 7) != 0 )
    return 0;
  v12 = v26 / 8;
  v25 = v12;
  sub_123A40((__int64)&v26, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 32LL), v10, v11);
  if ( v12 + *(_DWORD *)(a1 + 68) > v27 )
  {
LABEL_14:
    sub_11CDA0((__int64)&v26);
    return 0;
  }
  v14 = a2[12];
  if ( *(_BYTE *)(v14 + 145) && sub_11BB90((unsigned __int8 *)&v26, v14, 0, a4) )
    v25 = v27 - v12 - *(_DWORD *)(a1 + 68);
  if ( (_BYTE)v26 == 15 )
  {
    v15 = sub_126980((__int64)&v26, v25, *(_DWORD *)(a1 + 68), 0, a4);
  }
  else
  {
    if ( !(unsigned __int8)sub_126F10(&v26, a2, v25, v13, a4) )
      goto LABEL_14;
    v15 = sub_1272B0((__int64)&v26, a2, *(_DWORD *)(a1 + 68), 0, a4);
  }
  if ( !v15 )
    goto LABEL_14;
  v16 = *(_WORD *)(a3 + 32);
  v17 = v26;
  *(_DWORD *)a3 = 4;
  *(_WORD *)(a3 + 32) = v17;
  LOWORD(v26) = v16;
  v18 = *(_WORD *)(a3 + 34);
  *(_WORD *)(a3 + 34) = HIWORD(v26);
  HIWORD(v26) = v18;
  v19 = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a3 + 36) = v27;
  v27 = v19;
  v20 = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a3 + 40) = v28;
  v28 = v20;
  if ( a1 != a3 )
  {
    v21 = (unsigned __int8 *)(a1 + 64);
    v22 = a3 + 64;
    if ( v21 != (unsigned __int8 *)v22 )
    {
      sub_11CDA0(v22);
      sub_123A40(v22, v21, v23, v24);
    }
  }
  sub_11CDA0((__int64)&v26);
  return v5;
}

