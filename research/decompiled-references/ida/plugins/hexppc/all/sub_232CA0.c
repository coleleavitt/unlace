unsigned __int64 __fastcall sub_232CA0(__int64 a1, __int64 a2, int a3)
{
  size_t v7; // r13
  int tinfo_size; // eax
  int v9; // edx
  __int64 v10; // rdi
  void *v11; // rax
  const void *v12; // rsi
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rax
  int v17; // [rsp+4h] [rbp-A4h] BYREF
  __int64 v18; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+10h] [rbp-98h] BYREF
  int v20; // [rsp+18h] [rbp-90h]
  int v21; // [rsp+1Ch] [rbp-8Ch]
  void *v22; // [rsp+20h] [rbp-88h] BYREF
  __int128 v23; // [rsp+28h] [rbp-80h]
  __int64 v24; // [rsp+38h] [rbp-70h]
  unsigned __int64 v25; // [rsp+40h] [rbp-68h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  int v28; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a3 <= 1 && (!(unsigned __int8)*(_QWORD *)(a2 + 24) || (unsigned int)verify_tinfo()) )
    return v29 - __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 8);
  v22 = nullptr;
  v23 = 0;
  if ( v7 )
  {
    v11 = (void *)qalloc_or_throw();
    v12 = *(const void **)a2;
    *((_QWORD *)&v23 + 1) = v7;
    v22 = v11;
    memcpy(v11, v12, v7);
    *(_QWORD *)&v23 = v7;
  }
  v24 = 0;
  copy_tinfo_t();
  v25 = *(_QWORD *)(a2 + 32);
  v26 = *(_QWORD *)(a2 + 40);
  v27 = *(_QWORD *)(a2 + 48);
  v28 = *(_DWORD *)(a2 + 56);
  if ( a3 > 1 )
  {
    v20 = 0;
    v21 = a3;
    v19 = 0;
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
  }
  v28 = 2;
  tinfo_size = get_tinfo_size();
  HIDWORD(v27) = tinfo_size;
  v9 = tinfo_size;
  if ( tinfo_size )
  {
    if ( a3 > 1 && (signed __int64)v25 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) )
    {
      v13 = *(int *)(a1 + 260);
      v14 = *(_QWORD *)(a1 + 240);
      if ( !*(_DWORD *)(a1 + 260) || v25 < v14 || v13 + v14 - 1 < v25 )
      {
        v17 = tinfo_size;
        v18 = v25;
        v19 = 0;
        copy_tinfo_t();
        sub_224890(&v17, &v18, *(_QWORD *)(a1 + 8), &v19);
        clear_tinfo_t();
        v15 = v18;
        if ( (__int64)v25 > v18 || (v9 = HIDWORD(v27), v18 + v17 > (__int64)(v25 + SHIDWORD(v27))) )
        {
          v10 = *(_QWORD *)(a1 + 8);
          v16 = *(_QWORD *)(v10 + 1504);
          if ( (*(_BYTE *)(v16 + 50) & 8) != 0 )
          {
            if ( v17 > 15 )
            {
              v28 |= 0x100u;
              v9 = v17;
              v25 = v18;
              HIDWORD(v27) = v17;
LABEL_15:
              if ( !sub_223350(v10, v25, v9) )
                sub_232440((__m128i *)(a1 + 88), (__int64)&v22, nullptr);
              goto LABEL_12;
            }
          }
          else
          {
            v9 = v17;
            if ( 2 * *(_DWORD *)(v16 + 80) <= v17 )
            {
LABEL_25:
              v28 |= 0x100u;
              v25 = v15;
              HIDWORD(v27) = v9;
              goto LABEL_11;
            }
          }
          v9 = sub_119050(v17);
          goto LABEL_25;
        }
      }
    }
  }
LABEL_11:
  if ( v9 > 0 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    goto LABEL_15;
  }
LABEL_12:
  clear_tinfo_t();
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v29 - __readfsqword(0x28u);
}

