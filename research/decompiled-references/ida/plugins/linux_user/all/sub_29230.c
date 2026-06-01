__int64 __fastcall sub_29230(__int64 a1, unsigned __int64 *a2, __int64 *a3, char a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rsi
  __int64 v10; // rdi
  unsigned int v11; // ebp
  unsigned int v12; // r8d
  __int64 v13; // r9
  unsigned __int32 v14; // r14d
  __int64 v16; // r15
  size_t v17; // rcx
  __int64 v18; // r14
  unsigned __int64 v19; // rbx
  __int64 v20; // r14
  size_t v21; // r8
  __int64 v22; // r14
  size_t v23; // r8
  void *v24; // r9
  void *v25; // rdi
  void *v26; // r9
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-90h]
  size_t v31; // [rsp+8h] [rbp-90h]
  size_t v32; // [rsp+8h] [rbp-90h]
  size_t v33; // [rsp+8h] [rbp-90h]
  unsigned __int32 v34; // [rsp+14h] [rbp-84h]
  void *v35; // [rsp+18h] [rbp-80h]
  void *v36; // [rsp+18h] [rbp-80h]
  void *v37; // [rsp+20h] [rbp-78h] BYREF
  __int128 v38; // [rsp+28h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __int128 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v4 = *a2;
  if ( *a2 > 0xFFFFFFFFFFFFFFFBLL )
    return 0;
  v6 = a3[1];
  v8 = v4 + 4;
  if ( v6 < v4 + 4 )
    return 0;
  v10 = *a3;
  v11 = 0;
  v12 = *(_DWORD *)(*a3 + v4);
  if ( a4 )
  {
    if ( v8 > 0xFFFFFFFFFFFFFFFBLL )
      return v11;
    if ( v6 < v4 + 8 )
      return v11;
    if ( v4 + 8 > 0xFFFFFFFFFFFFFFFBLL )
      return v11;
    v13 = v4 + 12;
    if ( v6 < v4 + 12 )
      return v11;
    v12 = _byteswap_ulong(v12);
    v34 = _byteswap_ulong(*(_DWORD *)(v10 + v4 + 8));
    v14 = _byteswap_ulong(*(_DWORD *)(v10 + v4 + 4));
  }
  else
  {
    if ( v8 > 0xFFFFFFFFFFFFFFFBLL )
      return v11;
    if ( v6 < v4 + 8 )
      return v11;
    if ( v4 + 8 > 0xFFFFFFFFFFFFFFFBLL )
      return v11;
    v13 = v4 + 12;
    if ( v6 < v4 + 12 )
      return v11;
    v14 = *(_DWORD *)(v10 + v4 + 4);
    v34 = *(_DWORD *)(v10 + v4 + 8);
  }
  v16 = v12;
  v37 = nullptr;
  v30 = v13;
  v38 = 0;
  v11 = sub_28FE0((__int64 *)&v37, a3, v13, v12, 1);
  if ( (_BYTE)v11 )
  {
    v17 = v14;
    v18 = ((v16 + 3) & 0xFFFFFFFFFFFFFFFCLL) + v30;
    v31 = v17;
    v40 = 0;
    src = nullptr;
    v11 = sub_28FE0((__int64 *)&src, a3, v18, v17, 0);
    if ( (_BYTE)v11 )
    {
      v19 = ((v31 + 3) & 0xFFFFFFFFFFFFFFFCLL) + v18;
      if ( a1 )
      {
        v20 = v38;
        if ( (_QWORD)v38 && (v21 = v38 - 1, (_QWORD)v38 != 1) )
        {
          v26 = v37;
          v27 = *(void **)a1;
          if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v38 )
          {
            v36 = v37;
            v33 = v38 - 1;
            v29 = qvector_reserve();
            *(_QWORD *)a1 = v29;
            v26 = v36;
            v27 = (void *)v29;
            v21 = v33;
          }
          *(_QWORD *)(a1 + 8) = v20;
          memmove(v27, v26, v21);
          *(_BYTE *)(*(_QWORD *)a1 + v20 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
        v22 = v40;
        if ( (_QWORD)v40 && (v23 = v40 - 1, (_QWORD)v40 != 1) )
        {
          v24 = src;
          v25 = *(void **)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)v40 )
          {
            v35 = src;
            v32 = v40 - 1;
            v28 = qvector_reserve();
            *(_QWORD *)(a1 + 24) = v28;
            v24 = v35;
            v25 = (void *)v28;
            v23 = v32;
          }
          *(_QWORD *)(a1 + 32) = v22;
          memmove(v25, v24, v23);
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v22 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 32) = 0;
        }
        *(_DWORD *)(a1 + 48) = v34;
      }
      *a2 = v19;
    }
    if ( src )
    {
      *(_QWORD *)&v40 = 0;
      qfree();
    }
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  return v11;
}

