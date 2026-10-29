__int64 __fastcall sub_3EC1D0(__int64 a1, __int32 a2, char a3, double a4)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int8 *v6; // r13
  _DWORD *v8; // rdi
  __int64 (__fastcall *v9)(_DWORD *, unsigned int); // rdx
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // rdi
  __int64 (__fastcall *v19)(_DWORD *, unsigned int); // rdx
  __int64 v20; // rsi
  int v21; // ecx
  int v22; // esi
  __int64 v23; // r15
  int v24; // r14d
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // eax

  v4 = a2;
  v5 = 40LL * a2;
  v6 = (unsigned __int8 *)(a1 + v5 + 64);
  switch ( *(_BYTE *)(a1 + v5 + 65) )
  {
    case 1:
    case 3:
      v8 = *(_DWORD **)(a1 + 832);
      v9 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v8 + 168LL);
      v10 = *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      if ( v9 != sub_3E40F0 )
        return v9(v8, v10);
      if ( (unsigned __int16)v10 <= 0x1Fu )
      {
        return (unsigned int)(v8[88] + v8[20] * v10);
      }
      else if ( (_DWORD)v10 == 48 )
      {
        return (unsigned int)v8[120];
      }
      else if ( (_DWORD)v10 == 49 )
      {
        return (unsigned int)v8[121];
      }
      else
      {
        return (unsigned int)-1;
      }
    case 2:
      v12 = *(_QWORD *)(a1 + 832);
      v13 = *(_QWORD *)(v12 + 584);
      if ( !v13 )
        goto LABEL_36;
      v11 = *(_DWORD *)(*(_QWORD *)(v12 + 576) + 4 * v13 - 4);
      *(_QWORD *)(v12 + 584) = v13 - 1;
      v14 = *(_QWORD *)(a1 + 40LL * a2 + 80);
      if ( *(_WORD *)(a1 + 48) == 38 )
        sub_3EC0F0(a1, v14, v11);
      else
        sub_3EBE10(a1, v6, *(_QWORD *)(a1 + 40 * v4 + 80), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v11, a4);
      return v11;
    case 4:
      v16 = *(_QWORD *)(a1 + 832);
      v17 = *(_QWORD *)(v16 + 584);
      if ( !v17 )
        goto LABEL_36;
      v11 = *(_DWORD *)(*(_QWORD *)(v16 + 576) + 4 * v17 - 4);
      *(_QWORD *)(v16 + 584) = v17 - 1;
      v18 = *(_DWORD **)(a1 + 832);
      v19 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v18 + 168LL);
      v20 = *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      if ( v19 == sub_3E40F0 )
      {
        v21 = v18[20];
        if ( (unsigned __int16)v20 > 0x1Fu )
        {
          if ( (_DWORD)v20 == 48 )
          {
            v23 = (int)v18[120];
            v24 = v18[120];
          }
          else if ( (_DWORD)v20 == 49 )
          {
            v23 = (int)v18[121];
            v24 = v18[121];
          }
          else
          {
            v23 = -1;
            v24 = -1;
          }
        }
        else
        {
          v22 = v18[88] + v21 * v20;
          v23 = v22;
          v24 = v22;
        }
      }
      else
      {
        v31 = v19(v18, v20);
        v23 = v31;
        v24 = v31;
        v21 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
      }
      sub_3EBE10(a1, v6, *(_QWORD *)(a1 + 40 * v4 + 80), v21, v11, a4);
      sub_3E8420(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v23, (int)v11, (int)v11, 0);
      sub_3E62F0(*(_QWORD *)(a1 + 832), v24);
      return v11;
    case 5:
      v25 = *(_BYTE *)(a1 + 40LL * a2 + 69);
      if ( v25 > 2u && v25 != 7 )
      {
        if ( !under_debugger )
          sub_37CFE0(0xCEE1u, a4);
        BUG();
      }
      v26 = *(_QWORD *)(a1 + 832);
      v27 = *(_QWORD *)(v26 + 584);
      if ( !v27 )
        goto LABEL_36;
      v11 = *(_DWORD *)(*(_QWORD *)(v26 + 576) + 4 * v27 - 4);
      *(_QWORD *)(v26 + 584) = v27 - 1;
      v28 = *(_QWORD *)(a1 + 40LL * a2 + 72);
      if ( *(_WORD *)(a1 + 48) == 36 )
        v28 <<= 16;
      sub_3EBE10(a1, v6, v28, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v11, a4);
      return v11;
    case 7:
      if ( !a3 )
        return (unsigned int)-1;
      v29 = *(_QWORD *)(a1 + 832);
      v30 = *(_QWORD *)(v29 + 584);
      if ( !v30 )
LABEL_36:
        sub_3E4140(a4);
      v11 = *(_DWORD *)(*(_QWORD *)(v29 + 576) + 4 * v30 - 4);
      *(_QWORD *)(v29 + 584) = v30 - 1;
      sub_3EC020(a1, *(_QWORD *)(a1 + 40LL * a2 + 80), a2, v11, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
      return v11;
    default:
      return (unsigned int)-1;
  }
}

