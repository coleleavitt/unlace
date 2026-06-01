__int64 __fastcall sub_174190(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, __m128 a6)
{
  __int64 v7; // rdi
  _QWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r12
  unsigned __int64 *v14; // r14
  __int64 v15; // rdi
  unsigned int v16; // r12d
  __int64 v18; // rax
  __int64 *v19; // r15
  int v20; // r8d
  int v21; // r9d
  char v22; // dl
  char v23; // dl
  char v24; // r15
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  int v30; // r8d
  int v31; // r9d
  char v32; // al
  __int64 v33; // rdi
  char v34; // al
  __int64 v35[2]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 *v36; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+18h] [rbp-B0h]
  __int64 v38[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 *v39; // [rsp+40h] [rbp-88h] BYREF
  __int128 v40; // [rsp+48h] [rbp-80h]
  __int64 v41[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v42; // [rsp+70h] [rbp-58h] BYREF
  __int64 v43; // [rsp+78h] [rbp-50h]
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 8 || a4 )
    return 0;
  v7 = *(_QWORD *)(a1 + 16);
  v35[0] = 0;
  v35[1] = 0;
  v36 = nullptr;
  v37 = 0;
  sub_123EA0(v7, v35, a2, 0, 0xFFFF0000, 0.0);
  v8 = *(_QWORD **)(a1 + 56);
  if ( !(unsigned __int8)sub_64780(v35, v8) && !(unsigned __int8)sub_318470(&v36, (__int64)(v8 + 2)) )
  {
    *(_BYTE *)(a1 + 40) = 1;
LABEL_16:
    v16 = 0;
    goto LABEL_9;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL);
  v14 = *(unsigned __int64 **)(v13 + 112);
  if ( !*(_BYTE *)(a1 + 68) || !(unsigned __int8)sub_11E2C0(*(int ***)(a1 + 32), nullptr, nullptr, 0) )
  {
    v15 = *(_QWORD *)(a1 + 48);
    if ( *(_BYTE *)a2 == 4 )
    {
      if ( !sub_125B90((unsigned __int8 *)v15, (__int64)v14, *(unsigned int **)(a2 + 8), 0, 0.0) )
        goto LABEL_16;
      *(_BYTE *)(a1 + 40) = 1;
      v18 = *(_QWORD *)(a1 + 48);
LABEL_21:
      if ( *(_DWORD *)(v18 + 68) >= *(_DWORD *)(a2 + 4) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2);
        ++*(_DWORD *)(a1 + 64);
        goto LABEL_16;
      }
      goto LABEL_8;
    }
    if ( *(_DWORD *)v15 == 4 )
    {
      if ( (*(_BYTE *)(a2 + 1) & 4) == 0 && (*(_BYTE *)(v15 + 33) & 4) == 0 )
        goto LABEL_25;
    }
    else if ( *(_DWORD *)v15 != 67 || *(_DWORD *)(v15 + 68) != *(_DWORD *)(v15 + 36) )
    {
      goto LABEL_8;
    }
    if ( !sub_125B60((unsigned __int8 *)(v15 + 32), a2, 0, 0.0) )
      goto LABEL_8;
LABEL_25:
    v19 = *(__int64 **)(a1 + 56);
    sub_64640(v35, v19, v9, v10, v11, v12);
    sub_317C60((__int64 *)&v36, (__int64)(v19 + 2));
    if ( (unsigned __int8)sub_64880(v35) && !(_QWORD)v37 )
    {
      v18 = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)v18 == 4 )
      {
        v22 = sub_1255D0((unsigned __int8 *)a2, (__int64)v14, v18 + 32, 1, 0.0);
        v18 = *(_QWORD *)(a1 + 48);
        if ( !v22 )
        {
          v23 = *(_BYTE *)(v18 + 32);
          if ( v23 == 14 )
            goto LABEL_8;
          if ( v23 == 4 )
            goto LABEL_8;
          if ( (*(_BYTE *)(v18 + 4) & 0x10) != 0 )
            goto LABEL_8;
          if ( !(unsigned __int8)sub_121BB0(v18 + 32, (char *)a2, v38) )
            goto LABEL_8;
          v24 = sub_11CC50((unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 32LL), v13, 0, 0.0);
          v25 = sub_11CC50((unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 64LL), v13, 0, 0.0);
          v27 = *(_QWORD *)(a1 + 48);
          if ( v24 != v25 )
          {
            LODWORD(v38[0]) = *(_DWORD *)(v27 + 68) - LODWORD(v38[0]) - *(_DWORD *)(a2 + 4);
            if ( SLODWORD(v38[0]) < 0 )
              goto LABEL_8;
          }
          sub_123A40((__int64)v41, (unsigned __int8 *)(v27 + 64), v27, v26);
          if ( !(unsigned __int8)sub_126F10((int *)v41, v14, v38[0], v28, 0.0) )
          {
            sub_11CDA0((__int64)v41);
            goto LABEL_8;
          }
          sub_11CDA0((__int64)v41);
          v18 = *(_QWORD *)(a1 + 48);
        }
      }
      goto LABEL_21;
    }
    v16 = 1;
    if ( *(_BYTE *)a2 != 14 )
      goto LABEL_9;
    v29 = *(_QWORD *)(a1 + 16);
    v38[0] = 0;
    v38[1] = 0;
    v39 = nullptr;
    v40 = 0;
    sub_128EE0(v29, v38, (unsigned __int8 *)a2, 0x4001u, v20, v21, 0.0, a6);
    if ( !(unsigned __int8)sub_64880(v38) || (_QWORD)v40 )
    {
      sub_127A20((__int64)v41, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 48), 0, v30, v31, 0.0, a6);
      v32 = sub_64780(v38, v41);
      v33 = v42;
      if ( v32 || (v34 = sub_318470(&v39, (__int64)&v42), v33 = v42, v34) )
      {
        if ( v33 )
        {
          v43 = 0;
          qfree(v33);
        }
        v16 = 1;
        qfree(v41[0]);
        goto LABEL_44;
      }
      if ( v42 )
      {
        v43 = 0;
        qfree(v42);
      }
      qfree(v41[0]);
    }
    v16 = 0;
LABEL_44:
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree((__int64)v39);
    }
    qfree(v38[0]);
    goto LABEL_9;
  }
LABEL_8:
  v16 = 1;
LABEL_9:
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree((__int64)v36);
  }
  qfree(v35[0]);
  return v16;
}

