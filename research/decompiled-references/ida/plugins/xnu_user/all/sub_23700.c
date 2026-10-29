__int64 __fastcall sub_23700(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  const char *v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r13
  const char *v12; // r14
  size_t v13; // rax
  __int64 v15; // [rsp+10h] [rbp-118h]
  size_t v16; // [rsp+18h] [rbp-110h]
  size_t n; // [rsp+20h] [rbp-108h]
  const char *v18; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v19; // [rsp+38h] [rbp-F0h]
  __int64 v20; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-D0h]
  char v22; // [rsp+70h] [rbp-B8h]
  __int128 v23; // [rsp+78h] [rbp-B0h]
  __int64 v24; // [rsp+88h] [rbp-A0h]
  char v25; // [rsp+90h] [rbp-98h]
  __int128 v26; // [rsp+98h] [rbp-90h]
  __int64 v27; // [rsp+A8h] [rbp-80h]
  char v28; // [rsp+B0h] [rbp-78h]
  _OWORD v29[2]; // [rsp+B8h] [rbp-70h] BYREF
  unsigned __int64 v30; // [rsp+E8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v2 = (unsigned int *)sub_15850();
  v19 = 0;
  v18 = nullptr;
  v20 = 0;
  v21 = 0;
  if ( (unsigned __int8)sub_23460(v2, &v20, (__int64 *)&v18) )
  {
    idcv_object();
    v5 = v21;
    v22 = 2;
    v15 = v21;
    v24 = 0;
    v23 = 0;
    free_idcv();
    v22 = 2;
    *(_QWORD *)&v23 = v5;
    set_idcv_attr();
    if ( v5 )
    {
      v6 = 0;
      do
      {
        v25 = 2;
        v27 = 0;
        v26 = 0;
        idcv_object();
        v28 = 2;
        memset(v29, 0, 24);
        v11 = 40 * v6;
        v12 = sub_1F5D0(*(unsigned int *)(v20 + 40 * v6));
        free_idcv();
        v13 = strlen(v12);
        v28 = 7;
        memset(v29, 0, 24);
        if ( v13 )
        {
          n = v13;
          v16 = v13 + 1;
          *(_QWORD *)&v29[0] = qvector_reserve();
          *((_QWORD *)&v29[0] + 1) = v16;
          memmove(*(void **)&v29[0], v12, n);
          *(_BYTE *)(*(_QWORD *)&v29[0] + n) = 0;
        }
        set_idcv_attr();
        free_idcv();
        v28 = 2;
        memset(v29, 0, 24);
        v7 = *(_QWORD *)(v20 + v11 + 8);
        free_idcv();
        v28 = 9;
        *(_QWORD *)&v29[0] = v7;
        set_idcv_attr();
        free_idcv();
        v28 = 2;
        memset(v29, 0, 24);
        v8 = *(_QWORD *)(v20 + v11 + 16);
        free_idcv();
        v28 = 9;
        *(_QWORD *)&v29[0] = v8;
        set_idcv_attr();
        free_idcv();
        v28 = 2;
        memset(v29, 0, 24);
        v9 = *(_QWORD *)(v20 + v11 + 24);
        free_idcv();
        v28 = 9;
        *(_QWORD *)&v29[0] = v9;
        set_idcv_attr();
        free_idcv();
        v28 = 2;
        memset(v29, 0, 24);
        v10 = *(_QWORD *)(v20 + v11 + 32);
        free_idcv();
        v28 = 9;
        *(_QWORD *)&v29[0] = v10;
        set_idcv_attr();
        free_idcv();
        qsnprintf();
        set_idcv_attr();
        ++v6;
        free_idcv();
      }
      while ( v15 != v6 );
    }
    free_idcv();
  }
  else
  {
    v3 = src;
    if ( (_QWORD)v19 )
      v3 = v18;
    sub_140F0((__int64)"Error: %s\n", v3);
    free_idcv();
    *(_BYTE *)a2 = 2;
    *(_QWORD *)(a2 + 8) = 0;
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return 0;
}

