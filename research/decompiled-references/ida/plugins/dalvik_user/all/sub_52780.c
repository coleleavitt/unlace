__int64 __fastcall sub_52780(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 i; // rdi
  __int64 v10; // rax
  unsigned int v11; // esi
  int v12; // r15d
  unsigned __int8 *v13; // r14
  char v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 j; // rdi
  __int64 v18; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  _BYTE *v22; // rax
  _BYTE *v23; // r14
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 v28; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v29; // [rsp+8h] [rbp-C0h]
  char *v30; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-A0h]
  __int64 v33; // [rsp+40h] [rbp-88h] BYREF
  __int64 v34; // [rsp+48h] [rbp-80h]
  unsigned __int64 v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  unsigned __int64 v37; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-60h]
  unsigned __int64 v39; // [rsp+70h] [rbp-58h]
  char v40; // [rsp+78h] [rbp-50h]
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v5 = a1;
  v41 = __readfsqword(0x28u);
  qmutex_lock();
  sub_43F20((__int64)&v33, byte_7FBE9, 0x400u);
  sub_46BB0((__int64)&v33, *(_DWORD *)(a1 + 8), a2);
  sub_46BB0((__int64)&v33, *(_DWORD *)(a1 + 16), a3);
  if ( v40 )
    sub_1FAD0((__int64 *)&v37);
  v7 = v34;
  v8 = v35;
  for ( i = v33; v35 < v34 + 4; v8 = v35 )
  {
    v35 = v36 + v8;
    v10 = qrealloc();
    i = v10;
    if ( !v10 )
      sub_43DF0((__int64)"JDWP encoder");
    v33 = v10;
    v7 = v34;
  }
  *(_DWORD *)(i + v7) = 0x1000000;
  v11 = *(_DWORD *)(a4 + 84);
  v34 += 4;
  sub_46AA0((__int64)&v33, v11);
  v12 = *(_DWORD *)(v5 + 8);
  v13 = (unsigned __int8 *)(a4 + 96);
  if ( !v40 )
  {
    v14 = *(_BYTE *)(a4 + 96);
    goto LABEL_8;
  }
  v25 = v38;
  v26 = 2;
  if ( v38 )
  {
    v26 = v38 + 1;
    v27 = v37;
    v25 = v38 - 1;
    if ( v39 >= v38 + 1 )
      goto LABEL_30;
  }
  else
  {
    v27 = v37;
    if ( v39 >= 2 )
      goto LABEL_30;
  }
  v29 = v25;
  v28 = v26;
  v37 = qvector_reserve();
  v25 = v29;
  v27 = v37;
  v26 = v28;
LABEL_30:
  v38 = v26;
  *(_BYTE *)(v27 + v25) = 40;
  *(_BYTE *)(v37 + v25 + 1) = 0;
  v14 = *(_BYTE *)(a4 + 96);
  if ( v40 )
    sub_1FAD0((__int64 *)&v37);
LABEL_8:
  v15 = v34;
  v16 = v35;
  for ( j = v33; v35 < v34 + 1; v16 = v35 )
  {
    v35 = v36 + v16;
    v18 = qrealloc();
    j = v18;
    if ( !v18 )
      sub_43DF0((__int64)"JDWP encoder");
    v33 = v18;
    v15 = v34;
  }
  *(_BYTE *)(j + v15) = v14;
  ++v34;
  sub_476E0((__int64)&v33, v12, v13);
  if ( v40 )
  {
    v20 = v38;
    if ( v38 > 1 )
    {
      v21 = v37;
      v22 = (_BYTE *)(v37 + v38 - 1);
      if ( v37 < (unsigned __int64)v22 )
      {
        while ( *(v22 - 1) == 44 )
        {
          if ( (_BYTE *)v37 == --v22 )
            goto LABEL_25;
        }
      }
      v23 = &v22[-v37];
      if ( v22 == (_BYTE *)v37 )
      {
LABEL_25:
        if ( v37 )
        {
          v38 = 0;
          qfree();
          v37 = 0;
          v39 = 0;
        }
      }
      else
      {
        v24 = (unsigned __int64)(v23 + 1);
        if ( v38 < (unsigned __int64)(v23 + 1) )
        {
          if ( v39 < v24 )
          {
            v37 = qvector_reserve();
            v20 = v38;
            v21 = v37;
          }
          memset((void *)(v20 + v21), 0, v24 - v20);
          v38 = (unsigned __int64)(v23 + 1);
          v22 = &v23[v37];
        }
        else if ( (_BYTE *)v38 != v23 + 1 )
        {
          v38 = (unsigned __int64)(v23 + 1);
        }
        *v22 = 0;
      }
    }
    sub_43D60((__int64 *)&v37, "),");
  }
  v32 = 0;
  v31 = 0;
  v30 = sub_48F20(v5, 0x10u, 2u, (__int64)&v33, (__int64)&v31);
  LOBYTE(v5) = v30 != nullptr;
  sub_44B80((_QWORD **)&v30);
  qfree();
  if ( v37 )
  {
    v38 = 0;
    qfree();
  }
  qmutex_unlock();
  return (unsigned int)v5;
}

