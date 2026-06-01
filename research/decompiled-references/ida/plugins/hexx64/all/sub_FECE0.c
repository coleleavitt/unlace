__int64 __fastcall sub_FECE0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  _DWORD *exception; // rdi
  __int64 v5; // rax
  bool v8; // zf
  unsigned int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // rsi
  int v14; // eax
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // rax
  __int64 v19; // rax
  int v20; // r13d
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 i; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  _BYTE v32[32]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v33[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v34[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v35[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = *(_DWORD *)a3 == 56;
  v35[3] = __readfsqword(0x28u);
  if ( v8 )
    sub_339C80(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a3 + 32);
  v10 = sub_11C750((int *)a3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 1);
  if ( !(_BYTE)v10 )
  {
    v14 = *(_DWORD *)(a3 + 4);
    if ( (v14 & 0x8000) != 0 )
    {
      BYTE1(v14) &= ~0x80u;
      *(_DWORD *)(a3 + 4) = v14;
      v10 = sub_1D55D0(a1);
      if ( !(_BYTE)v10 )
      {
        exception = __cxa_allocate_exception(0x30u);
        v5 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)exception = off_4DBCD0;
        exception[2] = -4;
        *((_QWORD *)exception + 2) = v5;
        *((_QWORD *)exception + 3) = 0;
        *((_OWORD *)exception + 2) = 0;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
      }
      if ( *(_DWORD *)(a1 + 76) )
      {
        v15 = *(_QWORD *)(a1 + 376);
        if ( !(_DWORD)v15 )
        {
          v16 = *(_DWORD **)(a1 + 56);
          if ( *v16 == 55 )
            v17 = (unsigned int)v16[10];
          else
            v17 = (unsigned int)(*(_DWORD *)(a1 + 72) + 1);
          if ( !v15 )
          {
            v30 = *(_QWORD *)(a1 + 368);
            if ( !*(_QWORD *)(a1 + 384) )
            {
              v31 = qvector_reserve(a1 + 368, v30, 1, 4);
              v15 = *(_QWORD *)(a1 + 376);
              *(_QWORD *)(a1 + 368) = v31;
              v30 = v31;
            }
            memset((void *)(v30 + 4 * v15), 0, 4 * (1 - v15));
          }
          v18 = *(_DWORD **)(a1 + 368);
          *(_QWORD *)(a1 + 376) = 1;
          *v18 = v17;
          v19 = *(_QWORD *)(a1 + 64);
          if ( (unsigned int)v17 >= *(_DWORD *)(v19 + 64) )
            sub_FDB40(a4);
          v20 = *(_DWORD *)(a1 + 72);
          v21 = *(_QWORD **)(*(_QWORD *)(v19 + 528) + 8 * v17);
          v22 = v21[44];
          v23 = v21[43];
          if ( v21[45] < (unsigned __int64)(v22 + 1) )
          {
            v29 = qvector_reserve((__int64)(v21 + 43), v23, v22 + 1, 4);
            v21[43] = v29;
            v23 = v29;
            v22 = v21[44];
          }
          *(_DWORD *)(v23 + 4 * v22) = v20;
          ++v21[44];
          *(_DWORD *)(a1 + 76) = 3;
        }
      }
      return v10;
    }
    return 0;
  }
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 || *(_BYTE *)(a3 + 64) == 8 && *(_DWORD *)(a3 + 68) )
  {
    sub_6B260(a1, v11, a4);
    if ( *(_BYTE *)(a3 + 64) != 8 )
      goto LABEL_6;
    goto LABEL_24;
  }
  if ( a3 != a2 )
  {
    sub_6B260(a1, 0, a4);
    if ( *(_BYTE *)(a3 + 64) != 8 )
      goto LABEL_7;
    goto LABEL_24;
  }
  sub_6B260(a1, 0, a4);
  if ( *(_BYTE *)(a3 + 64) != 8 )
    return 0;
  v10 = 0;
LABEL_24:
  v24 = *(_QWORD **)(a3 + 72);
  v25 = v24[6];
  if ( v25 )
  {
    v26 = v24[7];
    if ( v26 )
    {
      for ( i = 0; i != v26; ++i )
      {
        v28 = i;
        sub_11CDA0(16 * v28 + v25);
        v25 = v24[6];
      }
    }
    v24[7] = 0;
    qfree(v25);
    v24[6] = 0;
    v24[8] = 0;
  }
  *(_DWORD *)(a3 + 68) = 0;
LABEL_6:
  if ( a3 != a2 )
  {
LABEL_7:
    v33[1] = 0;
    v12 = *(_QWORD *)(a3 + 24);
    v33[0] = 0xFFFFFFFF00000000LL;
    v34[0] = 0xFFFFFFFF00000000LL;
    v34[1] = 0;
    v35[0] = 0xFFFFFFFF00000000LL;
    v35[1] = 0;
    sub_330970((__int64)v32, v12);
    sub_11D890(a3, (__int64)v32);
    sub_11D890(a2, (__int64)v32);
    sub_11CDA0((__int64)v35);
    sub_11CDA0((__int64)v34);
    sub_11CDA0((__int64)v33);
  }
  return v10;
}

