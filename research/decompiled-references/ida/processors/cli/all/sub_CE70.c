__int64 __fastcall sub_CE70(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, double a5, double a6, __m128 a7)
{
  _QWORD *v9; // rsi
  __int64 v11; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void (__fastcall *v19)(_QWORD *, __int64); // rax
  unsigned int v20; // r13d
  void *v21; // rsi
  __int64 (__fastcall *v22)(_QWORD *, char); // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // rsi
  void *v27; // rsi
  void *v28; // rsi
  unsigned int v29; // r14d
  __int64 v31; // rax
  int v32[2]; // [rsp+8h] [rbp-4A8h] BYREF
  int v33[2]; // [rsp+10h] [rbp-4A0h] BYREF
  __int128 v34; // [rsp+18h] [rbp-498h]
  int v35[2]; // [rsp+30h] [rbp-480h] BYREF
  __int128 v36; // [rsp+38h] [rbp-478h]
  void *v37; // [rsp+50h] [rbp-460h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-458h]
  _BYTE v39[1032]; // [rsp+70h] [rbp-440h] BYREF
  unsigned __int64 v40; // [rsp+478h] [rbp-38h]

  v9 = (_QWORD *)a4;
  v11 = a1[77];
  v40 = __readfsqword(0x28u);
  v34 = 0;
  v13 = *(_QWORD *)(v11 + 144);
  *(_QWORD *)v33 = 0;
  *(_QWORD *)v35 = 0;
  *(_QWORD *)v32 = 0;
  v36 = 0;
  v14 = netnode_supval(v13, a4, v39, 1024, 100);
  if ( v14 < 0 )
  {
    v29 = 0;
  }
  else
  {
    *(_QWORD *)v32 = v39;
    sub_C470(
      (__int64)a1,
      (__int64 *)v33,
      (__int64 *)v35,
      (unsigned __int8 **)v32,
      (unsigned __int64)&v39[v14],
      a4,
      0.0,
      a6,
      a7,
      (char *)&s);
    v9 = a1;
    sub_82C0((__int64)&v37, (__int64)a1, 0, a3, a4, 0.0, a6, a7);
    if ( v38 <= 1 )
    {
      v29 = 0;
    }
    else
    {
      v19 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL);
      if ( a2 == -1 )
      {
        v19(a1, 34);
        v20 = 34;
      }
      else
      {
        v19(a1, 37);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 80LL))(a1, a2);
        v20 = 37;
      }
      v21 = &unk_15584;
      if ( (_QWORD)v34 )
        v21 = *(void **)v33;
      (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 56LL))(a1, v21, 0);
      v22 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v22 == sub_4B60 )
      {
        v23 = a1[4];
        v24 = 2;
        v25 = v23;
        if ( v23 )
        {
          v24 = v23 + 1;
          v25 = v23 - 1;
        }
        v26 = a1[3];
        if ( a1[5] < v24 )
        {
          v31 = qvector_reserve(a1 + 3, v26, v24, 1);
          a1[3] = v31;
          v26 = v31;
        }
        a1[4] = v24;
        *(_BYTE *)(v26 + v25) = 32;
        *(_BYTE *)(a1[3] + v25 + 1) = 0;
      }
      else
      {
        v22(a1, 32);
      }
      v27 = &unk_15584;
      if ( v38 )
        v27 = v37;
      (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 56LL))(a1, v27, 0);
      v28 = &unk_15584;
      if ( (_QWORD)v36 )
        v28 = *(void **)v35;
      (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 56LL))(a1, v28, 0);
      v9 = (_QWORD *)v20;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 72LL))(a1, v20);
      v29 = 1;
    }
    if ( v37 )
    {
      v38 = 0;
      qfree(v37, v9, v15, v16, v17, v18);
    }
  }
  if ( *(_QWORD *)v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(*(_QWORD *)v35, v9, v15, v16, v17, v18);
  }
  if ( *(_QWORD *)v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(*(_QWORD *)v33, v9, v15, v16, v17, v18);
  }
  return v29;
}

