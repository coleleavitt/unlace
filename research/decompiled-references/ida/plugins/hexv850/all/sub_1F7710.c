__int64 __fastcall sub_1F7710(__int64 a1, _DWORD *a2, unsigned __int8 *a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned __int8 v9; // al
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // r14
  int v14; // r11d
  __int64 v15; // r8
  __int64 *v16; // rsi
  char v17; // al
  __int64 v18; // rcx
  int v19; // r11d
  unsigned __int8 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // r8
  int v23; // eax
  unsigned int v24; // ebx
  _QWORD *v26; // rdi
  unsigned __int8 v27; // al
  char v28; // al
  int v29; // eax
  __int64 v30; // [rsp+0h] [rbp-90h]
  unsigned __int8 v32; // [rsp+1Ah] [rbp-76h]
  unsigned __int8 v33; // [rsp+1Bh] [rbp-75h]
  unsigned int v34; // [rsp+1Ch] [rbp-74h]
  int v36; // [rsp+20h] [rbp-70h]
  int v37; // [rsp+20h] [rbp-70h]
  int v38; // [rsp+20h] [rbp-70h]
  unsigned int v39; // [rsp+20h] [rbp-70h]
  __int64 v41; // [rsp+30h] [rbp-60h] BYREF
  _BYTE v42[8]; // [rsp+38h] [rbp-58h] BYREF
  __int64 v43; // [rsp+40h] [rbp-50h] BYREF
  __int64 v44; // [rsp+48h] [rbp-48h]
  unsigned __int64 v45; // [rsp+58h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  v41 = 0;
  if ( a5 )
    copy_tinfo_t();
  v9 = sub_23D3B0(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), a3, &v41, 0);
  v10 = *(_QWORD *)(a1 + 32);
  v32 = v9;
  if ( *((_DWORD *)a3 + 1) == -1 )
  {
    v34 = 1;
  }
  else if ( sub_118090(a3, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL)) )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v34 = *((_DWORD *)a3 + 1);
  }
  else
  {
    v34 = sub_202250(a3, v10);
    v10 = *(_QWORD *)(a1 + 32);
  }
  v13 = sub_11DB00(v10, (__int64)a3);
  if ( v13 && !(_BYTE)v41 )
  {
    sub_3266E0(&v43, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v34);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( *(_BYTE *)(a1 + 108) && (**(_BYTE **)(a1 + 8) & 1) != 0 )
  {
    v12 = a4;
    v14 = 0;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) + 1LL == a4 )
      v14 = (a4 == get_item_end()) << 9;
    v15 = *a3;
    if ( (_BYTE)v15 != 1 )
      goto LABEL_14;
LABEL_25:
    v26 = *(_QWORD **)(a1 + 8);
    if ( !a5 )
      LOWORD(v14) = v14 | 1;
    *a2 = sub_1F1740(v26, *((_DWORD *)a3 + 2), v34, &v41, *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL), a4, v14);
    goto LABEL_21;
  }
  v15 = *a3;
  v14 = 0;
  if ( (_BYTE)v15 == 1 )
    goto LABEL_25;
LABEL_14:
  v33 = v15;
  v16 = &v43;
  v36 = v14;
  v43 = -1;
  v44 = 0;
  v17 = sub_11CDF0((char *)a3, (__int64)&v43, v11, v12, v15);
  v19 = v36;
  v20 = v33;
  if ( !v17 || (_BYTE)v44 != 5 )
    goto LABEL_16;
  v30 = v43;
  if ( (unsigned __int8)sub_223EC0(*(_QWORD *)(a1 + 8), v43, a3, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), v33) )
  {
    v37 = (8 * sub_11DB00(*(_QWORD *)(a1 + 32), (__int64)a3)) | v36 | (32 * v32);
    v27 = sub_223CC0(*(_QWORD *)(a1 + 8), v30, *((unsigned int *)a3 + 1), a6);
    v16 = *(__int64 **)(a1 + 8);
    v38 = v37 | (v27 << 7);
    HIDWORD(v44) = v34;
    v28 = sub_1EB690(&v43, (__int64)v16, 1, a4);
    v19 = v38;
    v20 = v33;
    if ( v28 )
    {
      if ( (_BYTE)v44 != 5 )
        sub_1F5CB0(&v43, v16, HIDWORD(v44), v18, v33);
      v16 = (__int64 *)v43;
      if ( (unsigned __int8)sub_22D840(*(_QWORD *)(a1 + 8), v43, HIDWORD(v44), v18, v33) )
        goto LABEL_37;
      v19 = v38;
      if ( v13 )
      {
        sub_326610(v42, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL));
        v16 = (__int64 *)v42;
        copy_tinfo_t();
        clear_tinfo_t();
        v19 = v38;
        if ( !(_BYTE)v41 || (v29 = verify_tinfo(), v19 = v38, v29) )
        {
          v39 = v19 & 0xFFFFFFF7;
          clear_tinfo_t();
          v19 = v39;
        }
      }
      v42[0] = 0;
      goto LABEL_17;
    }
    if ( *((_DWORD *)a3 + 1) == -1 )
      HIDWORD(v44) = -1;
LABEL_16:
    v42[0] = 0;
    if ( v20 == 15 )
    {
      v23 = sub_1F1C10(
              *(_QWORD *)(a1 + 8),
              (__int64)a3,
              *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL),
              a4,
              v19,
              (__int64)v42);
      goto LABEL_19;
    }
LABEL_17:
    v21 = *(_QWORD *)(a1 + 8);
    v22 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 72LL);
    if ( (_BYTE)v44 != 5 )
      sub_1F5CB0(v21, v16, HIDWORD(v44), v18, v22);
    v23 = sub_22D8D0(v21, v43, HIDWORD(v44), (unsigned int)&v41, v22, a4, v19, (__int64)v42);
LABEL_19:
    *a2 = v23;
    if ( v23 == -1 )
    {
      v24 = -10;
      goto LABEL_22;
    }
    if ( !v42[0] )
      goto LABEL_21;
LABEL_37:
    v24 = -36;
    goto LABEL_22;
  }
  *a2 = -1;
LABEL_21:
  v24 = 0;
LABEL_22:
  clear_tinfo_t();
  return v24;
}

