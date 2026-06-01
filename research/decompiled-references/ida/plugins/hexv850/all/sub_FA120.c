__int64 __fastcall sub_FA120(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *exception; // rdi
  __int64 v4; // rax
  bool v7; // zf
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rsi
  int v13; // eax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rax
  __int64 v18; // rax
  int v19; // r13d
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  _QWORD *v23; // r12
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 i; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  _BYTE v31[32]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v32[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v33[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v34[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_DWORD *)a3 == 56;
  v34[3] = __readfsqword(0x28u);
  if ( v7 )
    sub_3338D0(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a3 + 32);
  v9 = sub_117B90(a3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 1);
  if ( !(_BYTE)v9 )
  {
    v13 = *(_DWORD *)(a3 + 4);
    if ( (v13 & 0x8000) != 0 )
    {
      BYTE1(v13) &= ~0x80u;
      *(_DWORD *)(a3 + 4) = v13;
      v9 = sub_1D0790(a1);
      if ( !(_BYTE)v9 )
      {
        exception = __cxa_allocate_exception(0x30u);
        v4 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)exception = off_4AF6B0;
        exception[2] = -4;
        *((_QWORD *)exception + 2) = v4;
        *((_QWORD *)exception + 3) = 0;
        *((_OWORD *)exception + 2) = 0;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_75A40);
      }
      if ( *(_DWORD *)(a1 + 76) )
      {
        v14 = *(_QWORD *)(a1 + 376);
        if ( !(_DWORD)v14 )
        {
          v15 = *(_DWORD **)(a1 + 56);
          if ( *v15 == 55 )
            v16 = (unsigned int)v15[10];
          else
            v16 = (unsigned int)(*(_DWORD *)(a1 + 72) + 1);
          if ( !v14 )
          {
            v29 = *(_QWORD *)(a1 + 368);
            if ( !*(_QWORD *)(a1 + 384) )
            {
              v30 = qvector_reserve();
              v14 = *(_QWORD *)(a1 + 376);
              *(_QWORD *)(a1 + 368) = v30;
              v29 = v30;
            }
            memset((void *)(v29 + 4 * v14), 0, 4 * (1 - v14));
          }
          v17 = *(_DWORD **)(a1 + 368);
          *(_QWORD *)(a1 + 376) = 1;
          *v17 = v16;
          v18 = *(_QWORD *)(a1 + 64);
          if ( (unsigned int)v16 >= *(_DWORD *)(v18 + 64) )
            sub_F8F80();
          v19 = *(_DWORD *)(a1 + 72);
          v20 = *(_QWORD **)(*(_QWORD *)(v18 + 528) + 8 * v16);
          v21 = v20[44];
          v22 = v20[43];
          if ( v20[45] < (unsigned __int64)(v21 + 1) )
          {
            v28 = qvector_reserve();
            v20[43] = v28;
            v22 = v28;
            v21 = v20[44];
          }
          *(_DWORD *)(v22 + 4 * v21) = v19;
          ++v20[44];
          *(_DWORD *)(a1 + 76) = 3;
        }
      }
      return v9;
    }
    return 0;
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 || *(_BYTE *)(a3 + 64) == 8 && *(_DWORD *)(a3 + 68) )
  {
    sub_667E0(a1, v10);
    if ( *(_BYTE *)(a3 + 64) != 8 )
      goto LABEL_6;
    goto LABEL_24;
  }
  if ( a3 != a2 )
  {
    sub_667E0(a1, 0);
    if ( *(_BYTE *)(a3 + 64) != 8 )
      goto LABEL_7;
    goto LABEL_24;
  }
  sub_667E0(a1, 0);
  if ( *(_BYTE *)(a3 + 64) != 8 )
    return 0;
  v9 = 0;
LABEL_24:
  v23 = *(_QWORD **)(a3 + 72);
  v24 = v23[6];
  if ( v24 )
  {
    v25 = v23[7];
    if ( v25 )
    {
      for ( i = 0; i != v25; ++i )
      {
        v27 = i;
        sub_1181E0(16 * v27 + v24);
        v24 = v23[6];
      }
    }
    v23[7] = 0;
    qfree();
    v23[6] = 0;
    v23[8] = 0;
  }
  *(_DWORD *)(a3 + 68) = 0;
LABEL_6:
  if ( a3 != a2 )
  {
LABEL_7:
    v32[1] = 0;
    v11 = *(_QWORD *)(a3 + 24);
    v32[0] = 0xFFFFFFFF00000000LL;
    v33[0] = 0xFFFFFFFF00000000LL;
    v33[1] = 0;
    v34[0] = 0xFFFFFFFF00000000LL;
    v34[1] = 0;
    sub_32ADE0(v31, v11);
    sub_118CD0(a3, v31);
    sub_118CD0(a2, v31);
    sub_1181E0(v34);
    sub_1181E0(v33);
    sub_1181E0(v32);
  }
  return v9;
}

