__int64 __fastcall sub_3F9340(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  void *v7; // rdi
  void (*v8)(void); // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r14
  bool v12; // zf
  int v13; // esi
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // r14
  __int64 v20; // r14
  int v21; // esi
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rdx
  _QWORD *v31; // r14
  unsigned __int64 *v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rbx
  __int16 v36; // ax
  __int16 v37; // cx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r12
  __int64 (__fastcall *v41)(__int64, __int64); // rax
  __int16 v42; // [rsp+Ch] [rbp-20Ch]
  unsigned int v43; // [rsp+1Ch] [rbp-1FCh] BYREF
  __int64 v44; // [rsp+20h] [rbp-1F8h] BYREF
  _QWORD *v45; // [rsp+28h] [rbp-1F0h]
  __int64 (__fastcall **v46)(); // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v47; // [rsp+38h] [rbp-1E0h]
  int v48; // [rsp+48h] [rbp-1D0h]
  __int64 (__fastcall **v49)(); // [rsp+50h] [rbp-1C8h]
  __int64 v50; // [rsp+58h] [rbp-1C0h]
  int v51; // [rsp+60h] [rbp-1B8h]
  __int128 v52; // [rsp+70h] [rbp-1A8h]
  __int64 v53; // [rsp+80h] [rbp-198h]
  __int64 v54; // [rsp+88h] [rbp-190h]
  __int64 v55; // [rsp+90h] [rbp-188h]
  char v56; // [rsp+98h] [rbp-180h] BYREF
  __int16 v57; // [rsp+9Eh] [rbp-17Ah]
  __int64 v58; // [rsp+C0h] [rbp-158h]
  __int64 v59; // [rsp+D0h] [rbp-148h]
  char v60; // [rsp+E9h] [rbp-12Fh]
  __int16 v61; // [rsp+EEh] [rbp-12Ah]
  unsigned __int64 v62; // [rsp+1D8h] [rbp-40h] BYREF

  v4 = a1[104];
  v62 = __readfsqword(0x28u);
  sub_3F7810(v4);
  sub_1CEFB0(a1[100]);
  sub_14DD30(a1[104], *(_QWORD *)(a1[104] + 4512LL));
  v6 = a1[104];
  v7 = *(void **)(v6 + 4512);
  if ( v7 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 8LL);
    if ( (char *)v8 == (char *)sub_3E6020 )
      operator delete(v7, 0x10u);
    else
      v8();
    v6 = a1[104];
  }
  *(_QWORD *)(v6 + 4512) = 0;
  sub_3F9270((__int64)a1);
  v9 = a1[100];
  if ( *(_BYTE *)(v9 + 137) == 12 && !sub_33ADF0(v9) )
    return 4294967294LL;
  v10 = a1[104];
  if ( *(_DWORD *)(get_ph() + 4) != 15 )
  {
    if ( !under_debugger )
      sub_37EEE0(0x2801u, a3);
LABEL_66:
    BUG();
  }
  v44 = -1;
  sub_CC530();
  *(_QWORD *)(v10 + 4416) = -1;
  v11 = a1[104];
  v12 = *(_QWORD *)(v11 + 4416) == -1;
  v13 = *(_DWORD *)(v11 + 360);
  v14 = *(_DWORD *)(v11 + 80);
  v44 = 0;
  v45 = nullptr;
  if ( v12 )
  {
    sub_60440(&v44, v13, v14);
    v46 = nullptr;
    v47 = 0;
    sub_60840((__int64 *)(v11 + 264), &v44);
    sub_312B30((__int64 *)(v11 + 280), (__int64 **)&v46);
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree();
    }
  }
  else
  {
    sub_60440(&v44, v13, v14);
    v46 = nullptr;
    v47 = 0;
    sub_60C00((__int64 *)(v11 + 264), &v44, v15, v16, v17, v18);
    sub_313AE0((__int64 *)(v11 + 280), (__int64)&v46);
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree();
    }
  }
  qfree();
  v19 = a1[104];
  if ( *(_DWORD *)(get_ph() + 4) != 15 )
  {
    if ( !under_debugger )
      sub_37EEE0(0x2800u, 0.0);
    goto LABEL_66;
  }
  v44 = -1;
  sub_CC530();
  *(_QWORD *)(v19 + 4424) = v44;
  v20 = a1[104];
  v12 = *(_QWORD *)(v20 + 4424) == -1;
  v21 = *(_DWORD *)(v20 + 392);
  v22 = *(_DWORD *)(v20 + 80);
  v44 = 0;
  v45 = nullptr;
  if ( v12 )
  {
    sub_60440(&v44, v21, v22);
    v46 = nullptr;
    v47 = 0;
    sub_60840((__int64 *)(v20 + 264), &v44);
    sub_312B30((__int64 *)(v20 + 280), (__int64 **)&v46);
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree();
    }
  }
  else
  {
    sub_60440(&v44, v21, v22);
    v46 = nullptr;
    v47 = 0;
    sub_60C00((__int64 *)(v20 + 264), &v44, v23, v24, v25, v26);
    sub_313AE0((__int64 *)(v20 + 280), (__int64)&v46);
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree();
    }
  }
  qfree();
  v27 = sub_CC530();
  v28 = a1[104];
  if ( v27 == 9 )
  {
    *(_QWORD *)(v28 + 4432) = *(_QWORD *)(a1[1] + 40LL);
    v29 = a1[104];
    if ( *(_DWORD *)(get_ph() + 4) != 15 )
      goto LABEL_40;
    goto LABEL_38;
  }
  *(_QWORD *)(v28 + 4432) = -1;
  v29 = a1[104];
  if ( *(_QWORD *)(v29 + 4416) == -1 )
  {
    if ( *(_DWORD *)(get_ph() + 4) != 15 )
LABEL_40:
      sub_3E67E0(0.0);
LABEL_38:
    v44 = -1;
    sub_CC530();
    *(_QWORD *)(v29 + 4416) = v44;
  }
  v30 = a1[1];
  v31 = *(_QWORD **)(v30 + 920);
  if ( !*(_BYTE *)(a1[100] + 148LL) || *(int *)(a2 + 96) <= 1 )
    goto LABEL_17;
  v53 = -1;
  v33 = (unsigned __int64 *)&v56;
  v54 = 0;
  v55 = 0;
  v52 = -1;
  do
  {
    *(_WORD *)v33 = 0;
    v33 += 5;
    *((_WORD *)v33 - 19) = 0;
    *((_WORD *)v33 - 18) = 0;
    *((_DWORD *)v33 - 2) = 0;
    *((_WORD *)v33 - 17) = 0;
    *((_OWORD *)v33 - 2) = 0;
    *(v33 - 2) = 0;
  }
  while ( &v62 != v33 );
  if ( (int)decode_insn() > 0
    && (_WORD)v54 == 88
    && (v58 & 0xFFFF00000000FF00LL) == 0x1E000000000400LL
    && v59 == 16
    && (int)decode_insn() > 0 )
  {
    v36 = v54;
    v37 = 1;
    if ( (_WORD)v54 != 4 )
    {
LABEL_46:
      if ( v36 == 236 && v60 == 1 && v61 == v37 && (int)decode_insn() > 0 && (_WORD)v54 == 329 )
      {
        v38 = v59 + 16 * v52;
        v39 = *(_QWORD *)(*(_QWORD *)(a1[100] + 24LL) + 16LL);
        if ( v38 != v39 )
        {
          if ( v38 == -1 )
            v39 = -1;
          else
            v39 &= v38;
        }
        v31[16] = v39;
      }
      goto LABEL_24;
    }
    if ( HIWORD(v58) == 1 )
    {
      v42 = v57;
      decode_insn();
      v37 = v42;
      v36 = v54;
      goto LABEL_46;
    }
  }
LABEL_24:
  v30 = a1[1];
LABEL_17:
  v44 = (__int64)off_4D6BA0;
  v45 = v31 + 8;
  *((_QWORD *)&v47 + 1) = -1;
  v48 = -1;
  v46 = off_4C8EF0;
  v50 = -1;
  v51 = -1;
  *(_QWORD *)&v47 = off_4C8ED0;
  v49 = off_4C8ED0;
  if ( !(unsigned __int8)sub_1CBB80((__int64)&v44, &v43, v30, a2) )
    return v43;
  sub_3F4CB0(v31);
  if ( v31[13] == -1 )
    return v43;
  v34 = a1[1];
  v35 = *(_QWORD *)(v34 + 928);
  if ( !v35 )
  {
    v40 = *(_QWORD *)(v34 + 1504);
    v41 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 312LL);
    if ( v41 == sub_3F4E30 )
    {
      v35 = operator new(0x198u);
      sub_3F4D70(v35, v40, v34);
    }
    else
    {
      v35 = v41(*(_QWORD *)(v34 + 1504), v34);
    }
    *(_QWORD *)(v34 + 928) = v35;
  }
  if ( (unsigned __int8)sub_195CE0(v35, (__int64)&v46) )
    return v43;
  else
    return 4294967283LL;
}

