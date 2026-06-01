__int64 __fastcall sub_39360(__int64 *a1)
{
  __int64 v1; // rax
  char v3; // al
  __int64 (__fastcall *v4)(__int64 *, char); // rax
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  __int64 (__fastcall *v10)(__int64 *, char); // rax
  __int64 v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64 *, char); // rax
  __int64 v16; // rbp
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64 *, char); // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 func; // rax
  __int64 v28; // rdx
  __int64 (__fastcall *v29)(__int64 *, char); // rax
  __int64 v30; // rbp
  unsigned __int64 v31; // r12
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(__int64 *, char); // rax
  __int64 v34; // rbp
  unsigned __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+0h] [rbp-48h] BYREF
  __int128 v44; // [rsp+8h] [rbp-40h]
  unsigned __int64 v45; // [rsp+18h] [rbp-30h]

  v1 = *a1;
  v45 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64 *))(v1 + 296))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 304))(a1, 0)
    && (*((_BYTE *)a1 + 308) & 8) != 0
    && *((_BYTE *)a1 + 305) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    v20 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
    if ( v20 == sub_37DD0 )
    {
      v21 = a1[4];
      if ( v21 )
      {
        v22 = v21 + 1;
        v23 = a1[4];
        --v21;
      }
      else
      {
        v23 = 1;
        v22 = 2;
      }
      v24 = a1[3];
      if ( a1[5] < v22 )
      {
        v40 = qvector_reserve(a1 + 3, v24, v22, 1);
        a1[3] = v40;
        v24 = v40;
      }
      a1[4] = v22;
      *(_BYTE *)(v24 + v21) = 32;
      *(_BYTE *)(a1[3] + v23) = 0;
    }
    else
    {
      v20(a1, 32);
    }
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 1);
  if ( (*((_BYTE *)a1 + 348) & 8) != 0 )
  {
    v3 = *((_BYTE *)a1 + 345);
    if ( v3 )
    {
      if ( v3 != 8 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
      v15 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v15 == sub_37DD0 )
      {
        v16 = a1[4];
        if ( v16 )
        {
          v18 = v16 + 1;
          v17 = a1[4];
          --v16;
        }
        else
        {
          v17 = 1;
          v18 = 2;
        }
        v19 = a1[3];
        if ( a1[5] < v18 )
        {
          v39 = qvector_reserve(a1 + 3, v19, v18, 1);
          a1[3] = v39;
          v19 = v39;
        }
        a1[4] = v18;
        *(_BYTE *)(v19 + v16) = 32;
        *(_BYTE *)(a1[3] + v17) = 0;
      }
      else
      {
        v15(a1, 32);
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 2);
    }
  }
  if ( (*((_BYTE *)a1 + 388) & 8) != 0 && *((_BYTE *)a1 + 385) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    v4 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
    if ( v4 == sub_37DD0 )
    {
      v5 = a1[4];
      if ( v5 )
      {
        v7 = v5 + 1;
        v6 = a1[4];
        --v5;
      }
      else
      {
        v6 = 1;
        v7 = 2;
      }
      v8 = a1[3];
      if ( a1[5] < v7 )
      {
        v38 = qvector_reserve(a1 + 3, v8, v7, 1);
        a1[3] = v38;
        v8 = v38;
      }
      a1[4] = v7;
      *(_BYTE *)(v8 + v5) = 32;
      *(_BYTE *)(a1[3] + v6) = 0;
    }
    else
    {
      v4(a1, 32);
    }
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 3);
  }
  if ( (*((_BYTE *)a1 + 428) & 8) != 0 && *((_BYTE *)a1 + 425) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    v10 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
    if ( v10 == sub_37DD0 )
    {
      v11 = a1[4];
      if ( v11 )
      {
        v13 = v11 + 1;
        v12 = a1[4];
        --v11;
      }
      else
      {
        v12 = 1;
        v13 = 2;
      }
      v14 = a1[3];
      if ( a1[5] < v13 )
      {
        v37 = qvector_reserve(a1 + 3, v14, v13, 1);
        a1[3] = v37;
        v14 = v37;
      }
      a1[4] = v13;
      *(_BYTE *)(v14 + v11) = 32;
      *(_BYTE *)(a1[3] + v12) = 0;
    }
    else
    {
      v10(a1, 32);
    }
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 4);
  }
  (*(void (__fastcall **)(__int64 *))(*a1 + 320))(a1);
  if ( (unsigned __int8)sub_2AA40(*((_WORD *)a1 + 124), nullptr, nullptr) )
  {
    v25 = netnode_altval(*(_QWORD *)(a1[77] + 152), a1[30], 833);
    if ( v25 == -1 )
    {
      (*(void (__fastcall **)(__int64 *))(*a1 + 376))(a1);
    }
    else
    {
      v26 = a1[30];
      v43 = 0;
      v44 = 0;
      func = get_func(v26);
      if ( func )
        v28 = (((int)get_func_chunknum(func, v25) >= 0) << 6) | 0x17u;
      else
        v28 = 23;
      if ( get_ea_name(&v43, v25, v28, 0) > 0 )
      {
        v29 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
        if ( v29 == sub_37DD0 )
        {
          v30 = a1[4];
          v31 = 2;
          if ( v30 )
            v31 = v30-- + 1;
          v32 = a1[3];
          if ( a1[5] < v31 )
          {
            v41 = qvector_reserve(a1 + 3, v32, v31, 1);
            a1[3] = v41;
            v32 = v41;
          }
          a1[4] = v31;
          *(_BYTE *)(v32 + v30) = 32;
          *(_BYTE *)(a1[3] + v30 + 1) = 0;
        }
        else
        {
          v29(a1, 32);
        }
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 64))(a1, 4);
        (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 56))(a1, *(_QWORD *)(a1[79] + 48), 0);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 72))(a1, 4);
        v33 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
        if ( v33 == sub_37DD0 )
        {
          v34 = a1[4];
          v35 = 2;
          if ( v34 )
            v35 = v34-- + 1;
          v36 = a1[3];
          if ( a1[5] < v35 )
          {
            v42 = qvector_reserve(a1 + 3, v36, v35, 1);
            a1[3] = v42;
            v36 = v42;
          }
          a1[4] = v35;
          *(_BYTE *)(v36 + v34) = 32;
          *(_BYTE *)(a1[3] + v34 + 1) = 0;
        }
        else
        {
          v33(a1, 32);
        }
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 56))(a1, v43, 0);
      }
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree(v43);
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
}

