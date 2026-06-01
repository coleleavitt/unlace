void __fastcall sub_3F0A50(__int64 a1, int a2, int a3, double a4)
{
  unsigned __int16 v4; // ax
  int v6; // r8d
  char v7; // r13
  __int64 v8; // rbp
  bool v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  signed int v20; // ebp
  int v21; // esi
  __int64 v22; // rax
  int v23; // edx
  char v24; // al
  _DWORD *v25; // rdi
  __int64 (__fastcall *v26)(_DWORD *, unsigned int); // rax
  unsigned int v27; // eax
  __int64 v28; // rcx
  signed int v29; // eax
  __int64 v30; // [rsp-10h] [rbp-98h]
  double v31; // [rsp+8h] [rbp-80h]
  __int64 v33; // [rsp+10h] [rbp-78h]
  int v34; // [rsp+24h] [rbp-64h]
  int v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h] BYREF
  __int64 v37; // [rsp+38h] [rbp-50h]
  int v38; // [rsp+40h] [rbp-48h]
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( ((*(_WORD *)(a1 + 890) - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCF5u, a4);
    goto LABEL_44;
  }
  v4 = *(_WORD *)(a1 + 48);
  v6 = a3;
  if ( v4 == 1729 )
  {
LABEL_24:
    v7 = 0;
    goto LABEL_27;
  }
  if ( v4 <= 0x6C1u )
  {
    if ( v4 <= 0x33Du )
    {
      if ( v4 > 0x33Bu )
      {
        v7 = 0;
        goto LABEL_8;
      }
      if ( (unsigned __int16)(v4 - 824) <= 1u )
      {
        v7 = 1;
LABEL_8:
        if ( a2 == -1 )
        {
          v8 = *(_QWORD *)(a1 + 88);
          if ( !v8 )
            return;
          v36 = *(_QWORD *)(a1 + 88);
          v37 = 0xFFFFFFFFLL;
          v38 = 0;
          if ( !(unsigned __int8)sub_3E8180(&v36) )
            return;
          v34 = 0;
          v9 = 0;
          v10 = *(_QWORD *)(a1 + 832);
          v6 = a3;
          v31 = *(double *)&v37;
          goto LABEL_12;
        }
        if ( !under_debugger )
          sub_37E160(0xCCF4u, a4);
LABEL_44:
        BUG();
      }
LABEL_37:
      if ( !under_debugger )
        sub_37E160(0xCCF6u, a4);
      goto LABEL_44;
    }
    if ( v4 != 1728 )
      goto LABEL_37;
    goto LABEL_26;
  }
  if ( v4 != 1764 )
  {
    if ( v4 != 1765 )
      goto LABEL_37;
    goto LABEL_24;
  }
LABEL_26:
  v7 = 1;
LABEL_27:
  v10 = *(_QWORD *)(a1 + 832);
  v9 = 0;
  if ( **(_DWORD **)(v10 + 696) == a2 )
    v9 = v4 == 1729 || v4 == 1765;
  v27 = *(unsigned __int16 *)(a1 + 70);
  v28 = *(_QWORD *)(a1 + 152);
  if ( (unsigned __int16)v27 <= 0x1Fu && (unsigned int)(v28 - 1) <= 0xF )
  {
    v34 = 1;
    v8 = 0;
    *(_QWORD *)&a4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v28)).m128i_u64[0];
    v31 = a4;
LABEL_12:
    v11 = *(_QWORD *)(v10 + 760);
    if ( !v11
      || (v12 = *(int *)(*(_QWORD *)(v10 + 752) + 4 * v11 - 4),
          *(_QWORD *)(v10 + 760) = v11 - 1,
          sub_3EAB70(a1, 4u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v6, 0x3BEA45E214ADDC55LL, v12, 0),
          v13 = *(_QWORD *)(a1 + 832),
          (v14 = *(_QWORD *)(v13 + 760)) == 0) )
    {
      sub_3E5460(a4);
    }
    v15 = *(_DWORD *)(*(_QWORD *)(v13 + 752) + 4 * v14 - 4);
    *(_QWORD *)(v13 + 760) = v14 - 1;
    v16 = v15;
    v35 = v15;
    sub_3EC710(a1, *(unsigned __int16 *)(a1 + 890), 0, v15, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    v18 = v16;
    v19 = v8;
    v33 = v18;
    do
    {
      v25 = *(_DWORD **)(a1 + 832);
      if ( v9 )
      {
        v20 = **((_DWORD **)v25 + 87);
      }
      else
      {
        v26 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v25 + 168LL);
        if ( v26 == sub_3E5480 )
        {
          v20 = sub_3E5480(v25, LODWORD(v31));
        }
        else
        {
          v29 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64))v26)(v25, LODWORD(v31), v17);
          v25 = *(_DWORD **)(a1 + 832);
          v20 = v29;
        }
      }
      v21 = v25[21];
      v22 = (int)v25[16];
      v23 = *(unsigned __int16 *)(a1 + 890);
      if ( v7 )
      {
        sub_3EAB70(a1, 2u, v23, v22, v12, v20, v21);
        sub_3EE280(a1, *(unsigned __int16 *)(a1 + 890), v20);
      }
      else
      {
        sub_3EAB70(a1, 1u, v23, v20, v22, v12, v21);
      }
      sub_3EAB70(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v12, v33, v12, 0);
      v36 = v19;
      v37 = *(_QWORD *)&v31;
      v38 = v34;
      v24 = sub_3E8180(&v36);
      v31 = *(double *)&v37;
      v17 = v30;
    }
    while ( v24 );
    sub_3E8540(*(_QWORD *)(a1 + 832), v12);
    sub_3E8540(*(_QWORD *)(a1 + 832), v35);
  }
}

