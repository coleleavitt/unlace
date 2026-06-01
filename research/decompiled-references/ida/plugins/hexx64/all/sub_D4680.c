__int64 __fastcall sub_D4680(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  _DWORD *v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  _QWORD *v18; // rbp
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rcx
  _DWORD *v22; // rdi
  int v23; // r8d
  _DWORD *v24; // rdx
  __int64 v25; // rax
  int v26; // esi
  int v27; // ecx
  _DWORD *v28; // rax
  bool v29; // zf
  _DWORD *v30; // rax
  bool v31; // al
  _DWORD *v32; // rax
  _DWORD *v33; // rbp
  _DWORD *v34; // r11
  bool v35; // al
  _DWORD *v36; // rax
  _DWORD *v37; // rdx
  _DWORD v39[4]; // [rsp+20h] [rbp-F8h] BYREF
  _DWORD *v40; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v41; // [rsp+38h] [rbp-E0h]
  __int64 v42; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v43; // [rsp+58h] [rbp-C0h]
  __int64 v44; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+78h] [rbp-A0h]
  __int64 v46; // [rsp+88h] [rbp-90h]
  __int64 v47; // [rsp+90h] [rbp-88h]
  __int64 v48; // [rsp+98h] [rbp-80h]
  __int128 v49; // [rsp+A0h] [rbp-78h]
  __int64 v50; // [rsp+B0h] [rbp-68h]
  __int128 v51; // [rsp+B8h] [rbp-60h]
  char v52; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+D8h] [rbp-40h]

  v3 = 1;
  v4 = *(_DWORD *)(a1 + 72);
  v53 = __readfsqword(0x28u);
  if ( (unsigned int)(v4 - 208) <= 0x2F )
    return v3;
  v44 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v45 = 0;
  v49 = 0;
  v51 = 0;
  if ( (v4 & 0xFFFFFF0F) != 0 || v4 == 192 )
  {
    HIDWORD(v46) = v4;
    LOBYTE(v4) = -64;
  }
  v8 = (unsigned int)a3[22];
  v52 = v4;
  v40 = nullptr;
  v41 = 0;
  v9 = sub_D2BA0(a1, (__int64)&v40, a3, v8, 0);
  v10 = v40;
  v3 = v9;
  if ( (_BYTE)v9 )
  {
    v11 = v41;
    if ( (_QWORD)v41 )
    {
      if ( (unsigned int)(*(_DWORD *)a1 - 5) <= 1 && (get_tinfo_property() & 0xF) == 9 )
      {
        v36 = *(_DWORD **)(a1 + 88);
        v37 = &v36[*(_QWORD *)(a1 + 96)];
        if ( v36 != v37 )
        {
          while ( *v10 != *v36 )
          {
            if ( v37 == ++v36 )
              goto LABEL_9;
          }
          if ( v36 != v37 )
            goto LABEL_13;
        }
      }
    }
LABEL_9:
    v42 = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v12 = v45;
    v13 = v44;
    if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
    {
      v44 = qvector_reserve((__int64)&v44, v44, v45 + 1, 80);
      v13 = v44;
      v12 = v45;
    }
    v14 = v13 + 80 * v12;
    *(_DWORD *)v14 = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 64) = 0;
    *(_DWORD *)(v14 + 72) = 0;
    *(_OWORD *)(v14 + 24) = 0;
    *(_OWORD *)(v14 + 48) = 0;
    *(_QWORD *)&v45 = v45 + 1;
    copy_tinfo_t();
    if ( (unsigned __int8)calc_arglocs() )
    {
      sub_1C6010((__int64)v39, a2, v14, (unsigned int)a3[22]);
      v21 = (unsigned int)a3[22];
      v43 = 0;
      v42 = 0;
      v3 = sub_D2BA0(a1, (__int64)&v42, v39, v21, 0);
      if ( (_BYTE)v3 )
      {
        if ( (unsigned __int64)v43 < v11 )
        {
LABEL_62:
          v3 = 0;
          goto LABEL_49;
        }
        if ( v11 )
        {
          v22 = *(_DWORD **)(a1 + 88);
          v23 = 0;
          v24 = &v22[*(_QWORD *)(a1 + 96)];
          v25 = 0;
          do
          {
            v26 = v10[v25];
            v27 = *(_DWORD *)(v42 + 4 * v25);
            if ( v22 != v24 )
            {
              v28 = *(_DWORD **)(a1 + 88);
              do
              {
                if ( v26 == *v28 )
                  break;
                ++v28;
              }
              while ( v24 != v28 );
              v29 = v28 == v24;
              v30 = *(_DWORD **)(a1 + 88);
              do
              {
                if ( *v30 == v27 )
                {
                  v31 = v30 != v24;
                  goto LABEL_38;
                }
                ++v30;
              }
              while ( v30 != v24 );
              v31 = 0;
LABEL_38:
              if ( v31 != !v29 )
                goto LABEL_62;
            }
            v32 = *(_DWORD **)(a1 + 112);
            v33 = &v32[*(_QWORD *)(a1 + 120)];
            if ( v32 != v33 )
            {
              v34 = *(_DWORD **)(a1 + 112);
              do
              {
                if ( v26 == *v34 )
                  break;
                ++v34;
              }
              while ( v33 != v34 );
              do
              {
                if ( *v32 == v27 )
                {
                  v35 = v32 != v33;
                  goto LABEL_47;
                }
                ++v32;
              }
              while ( v32 != v33 );
              v35 = 0;
LABEL_47:
              if ( v35 != (v34 != v33) )
                goto LABEL_62;
            }
            v25 = ++v23;
          }
          while ( v23 < v11 );
        }
      }
LABEL_49:
      if ( v42 )
        qfree(v42);
      cleanup_argloc();
      goto LABEL_13;
    }
  }
  v3 = 0;
LABEL_13:
  if ( v10 )
    qfree((__int64)v10);
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v15 = v44;
  if ( v44 )
  {
    v16 = v45;
    if ( (_QWORD)v45 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t();
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20);
        }
        ++v17;
        cleanup_argloc();
        v15 = v44;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v45 = 0;
    qfree(v15);
  }
  return v3;
}

