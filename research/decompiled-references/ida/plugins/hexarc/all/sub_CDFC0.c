__int64 __fastcall sub_CDFC0(__int64 a1, __int64 a2, _DWORD *a3)
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
  __int64 v19; // rcx
  _DWORD *v20; // rdi
  int v21; // r8d
  _DWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // esi
  int v25; // ecx
  _DWORD *v26; // rax
  bool v27; // zf
  _DWORD *v28; // rax
  bool v29; // al
  _DWORD *v30; // rax
  _DWORD *v31; // rbp
  _DWORD *v32; // r11
  bool v33; // al
  _DWORD *v34; // rax
  _DWORD *v35; // rdx
  _DWORD v37[4]; // [rsp+20h] [rbp-F8h] BYREF
  _DWORD *v38; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+38h] [rbp-E0h]
  __int64 v40; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+58h] [rbp-C0h]
  __int64 v42; // [rsp+70h] [rbp-A8h]
  __int128 v43; // [rsp+78h] [rbp-A0h]
  __int64 v44; // [rsp+88h] [rbp-90h]
  __int64 v45; // [rsp+90h] [rbp-88h]
  __int64 v46; // [rsp+98h] [rbp-80h]
  __int128 v47; // [rsp+A0h] [rbp-78h]
  __int64 v48; // [rsp+B0h] [rbp-68h]
  __int128 v49; // [rsp+B8h] [rbp-60h]
  char v50; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v51; // [rsp+D8h] [rbp-40h]

  v3 = 1;
  v4 = *(_DWORD *)(a1 + 72);
  v51 = __readfsqword(0x28u);
  if ( (unsigned int)(v4 - 208) <= 0x2F )
    return v3;
  v42 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v43 = 0;
  v47 = 0;
  v49 = 0;
  if ( (v4 & 0xFFFFFF0F) != 0 || v4 == 192 )
  {
    HIDWORD(v44) = v4;
    LOBYTE(v4) = -64;
  }
  v8 = (unsigned int)a3[22];
  v50 = v4;
  v38 = nullptr;
  v39 = 0;
  v9 = sub_CC4E0(a1, (__int64 *)&v38, a3, v8, 0);
  v10 = v38;
  v3 = v9;
  if ( (_BYTE)v9 )
  {
    v11 = v39;
    if ( (_QWORD)v39 )
    {
      if ( (unsigned int)(*(_DWORD *)a1 - 5) <= 1 && (get_tinfo_property() & 0xF) == 9 )
      {
        v34 = *(_DWORD **)(a1 + 88);
        v35 = &v34[*(_QWORD *)(a1 + 96)];
        if ( v34 != v35 )
        {
          while ( *v10 != *v34 )
          {
            if ( v35 == ++v34 )
              goto LABEL_9;
          }
          if ( v34 != v35 )
            goto LABEL_13;
        }
      }
    }
LABEL_9:
    v40 = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v12 = v43;
    v13 = v42;
    if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
    {
      v42 = qvector_reserve();
      v13 = v42;
      v12 = v43;
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
    *(_QWORD *)&v43 = v43 + 1;
    copy_tinfo_t();
    if ( (unsigned __int8)calc_arglocs() )
    {
      sub_1BF790(v37, a2, v14, (unsigned int)a3[22]);
      v19 = (unsigned int)a3[22];
      v41 = 0;
      v40 = 0;
      v3 = sub_CC4E0(a1, &v40, v37, v19, 0);
      if ( (_BYTE)v3 )
      {
        if ( (unsigned __int64)v41 < v11 )
        {
LABEL_62:
          v3 = 0;
          goto LABEL_49;
        }
        if ( v11 )
        {
          v20 = *(_DWORD **)(a1 + 88);
          v21 = 0;
          v22 = &v20[*(_QWORD *)(a1 + 96)];
          v23 = 0;
          do
          {
            v24 = v10[v23];
            v25 = *(_DWORD *)(v40 + 4 * v23);
            if ( v20 != v22 )
            {
              v26 = *(_DWORD **)(a1 + 88);
              do
              {
                if ( v24 == *v26 )
                  break;
                ++v26;
              }
              while ( v22 != v26 );
              v27 = v26 == v22;
              v28 = *(_DWORD **)(a1 + 88);
              do
              {
                if ( *v28 == v25 )
                {
                  v29 = v28 != v22;
                  goto LABEL_38;
                }
                ++v28;
              }
              while ( v28 != v22 );
              v29 = 0;
LABEL_38:
              if ( v29 != !v27 )
                goto LABEL_62;
            }
            v30 = *(_DWORD **)(a1 + 112);
            v31 = &v30[*(_QWORD *)(a1 + 120)];
            if ( v30 != v31 )
            {
              v32 = *(_DWORD **)(a1 + 112);
              do
              {
                if ( v24 == *v32 )
                  break;
                ++v32;
              }
              while ( v31 != v32 );
              do
              {
                if ( *v30 == v25 )
                {
                  v33 = v30 != v31;
                  goto LABEL_47;
                }
                ++v30;
              }
              while ( v30 != v31 );
              v33 = 0;
LABEL_47:
              if ( v33 != (v32 != v31) )
                goto LABEL_62;
            }
            v23 = ++v21;
          }
          while ( v21 < v11 );
        }
      }
LABEL_49:
      if ( v40 )
        qfree();
      cleanup_argloc();
      goto LABEL_13;
    }
  }
  v3 = 0;
LABEL_13:
  if ( v10 )
    qfree();
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v15 = v42;
  if ( v42 )
  {
    v16 = v43;
    if ( (_QWORD)v43 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t();
        if ( v18[5] )
        {
          v18[6] = 0;
          qfree();
        }
        if ( v18[2] )
        {
          v18[3] = 0;
          qfree();
        }
        ++v17;
        cleanup_argloc();
        v15 = v42;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  return v3;
}

