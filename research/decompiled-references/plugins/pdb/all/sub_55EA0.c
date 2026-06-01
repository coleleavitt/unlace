__int64 __fastcall sub_55EA0(__int64 a1, unsigned int a2, double a3, double a4, double a5)
{
  void *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebp
  _DWORD *v10; // r12
  _DWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _DWORD *v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  _BOOL8 v24; // rdi
  _DWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebx
  void (*v29)(void); // rax
  __int64 *v31; // rbx
  __int64 v32; // rsi
  __m128i si128; // xmm0
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // [rsp+0h] [rbp-78h]
  unsigned int v37; // [rsp+18h] [rbp-60h]
  int v38; // [rsp+18h] [rbp-60h]
  unsigned int v39; // [rsp+18h] [rbp-60h]
  void *v40; // [rsp+28h] [rbp-50h] BYREF
  _DWORD v41[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**(_QWORD **)(a1 + 608) + 24LL))(&v40, *(_QWORD *)(a1 + 608), a2);
  v6 = v40;
  if ( v40 )
  {
    v36 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v40 + 24LL))(v40);
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v40 + 32LL))(v40);
      v6 = v40;
      if ( v7 >= v36 )
      {
        v28 = 1;
        goto LABEL_36;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(void *, _DWORD *, __int64))(*(_QWORD *)v40 + 48LL))(v40, v41, 8) )
      {
        v6 = v40;
        v28 = 0;
        goto LABEL_36;
      }
      v8 = *(_QWORD *)(a1 + 768);
      v9 = v41[1];
      v10 = (_DWORD *)(a1 + 760);
      if ( !v8 )
        goto LABEL_25;
      v11 = (_DWORD *)(a1 + 760);
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v8 + 16);
          v13 = *(_QWORD *)(v8 + 24);
          if ( *(_DWORD *)(v8 + 32) < v41[0] )
            break;
          v11 = (_DWORD *)v8;
          v8 = *(_QWORD *)(v8 + 16);
          if ( !v12 )
            goto LABEL_10;
        }
        v8 = *(_QWORD *)(v8 + 24);
      }
      while ( v13 );
LABEL_10:
      if ( v10 == v11 )
      {
LABEL_25:
        v25 = (_DWORD *)operator new(0x28u);
        v18 = v41[0];
        v25[9] = 0;
        v19 = v25;
        v25[8] = v18;
        if ( !*(_QWORD *)(a1 + 792) )
          goto LABEL_27;
        v21 = *(_QWORD *)(a1 + 784);
        v11 = nullptr;
        if ( *(_DWORD *)(v21 + 32) >= (unsigned int)v18 )
          goto LABEL_27;
      }
      else
      {
        if ( v41[0] >= v11[8] )
          goto LABEL_22;
        v14 = (_DWORD *)operator new(0x28u);
        v18 = v41[0];
        v14[9] = 0;
        v19 = v14;
        v14[8] = v18;
        v20 = (unsigned int)v11[8];
        if ( (unsigned int)v18 >= (unsigned int)v20 )
        {
          if ( (unsigned int)v20 >= (unsigned int)v18 )
            goto LABEL_23;
          if ( *(_DWORD **)(a1 + 784) == v11 )
          {
LABEL_33:
            v21 = (__int64)v11;
            if ( v11 )
              goto LABEL_34;
            goto LABEL_23;
          }
          v39 = v18;
          v27 = std::_Rb_tree_increment(v11, v20, v15, v18, v16, v17, a3, a4, a5);
          v18 = v39;
          v21 = v27;
          if ( v39 >= *(_DWORD *)(v27 + 32) )
            goto LABEL_27;
          if ( !*((_QWORD *)v11 + 3) )
            goto LABEL_33;
          v11 = (_DWORD *)v27;
        }
        else
        {
          v21 = (__int64)v11;
          if ( *(_DWORD **)(a1 + 776) == v11 )
            goto LABEL_17;
          v37 = v18;
          v22 = std::_Rb_tree_decrement(v11, v20, v11, v18, v16);
          v18 = v37;
          v21 = v22;
          if ( *(_DWORD *)(v22 + 32) >= v37 )
          {
LABEL_27:
            v38 = v18;
            v26 = sub_54BC0(a1 + 752, (unsigned int)v18, v21, v18, v23);
            LODWORD(v18) = v38;
            v11 = (_DWORD *)v26;
            goto LABEL_17;
          }
          if ( *(_QWORD *)(v22 + 24) )
            v21 = (__int64)v11;
          else
            v11 = nullptr;
        }
      }
LABEL_17:
      if ( v21 )
      {
        if ( v10 == (_DWORD *)v21 || v11 )
        {
          v24 = 1;
        }
        else
        {
          LODWORD(v20) = *(_DWORD *)(v21 + 32);
LABEL_34:
          v24 = (unsigned int)v18 < (unsigned int)v20;
        }
        v11 = v19;
        std::_Rb_tree_insert_and_rebalance(v24, v19, v21, a1 + 760, a3, a4, a5);
        ++*(_QWORD *)(a1 + 792);
        goto LABEL_22;
      }
LABEL_23:
      if ( v19 )
      {
        operator delete(v19, 0x28u);
        v11[9] = v9;
      }
      else
      {
LABEL_22:
        v11[9] = v9;
      }
    }
  }
  v31 = *(__int64 **)(a1 + 600);
  v32 = *v31;
  if ( (unsigned __int64)v31[2] <= 0x1A )
  {
    v35 = qvector_reserve(v31, v32, 27, 1);
    *v31 = v35;
    v32 = v35;
    v6 = v40;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_94070);
  v31[1] = 27;
  *(__m128i *)v32 = si128;
  *(__m128i *)(v32 + 10) = _mm_load_si128((const __m128i *)&xmmword_94080);
  v34 = *v31;
  v28 = 0;
  *(_BYTE *)(v34 + 26) = 0;
LABEL_36:
  if ( v6 )
  {
    v29 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    if ( (char *)v29 == (char *)sub_54910 )
      operator delete(v6, 0x40u);
    else
      v29();
  }
  return v28;
}
