__int64 __fastcall sub_227220(__int64 a1, _BYTE *a2, __int64 a3, char a4, __m128i a5, __m128 a6)
{
  unsigned int v6; // ebp
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  _QWORD v21[11]; // [rsp+0h] [rbp-58h] BYREF

  v21[5] = __readfsqword(0x28u);
  if ( *a2 != 5 )
    return 0;
  v11 = sub_1FBD10(*(_QWORD ***)(a1 + 48), (unsigned __int64)a2);
  v12 = v11;
  if ( !v11 )
    return 0;
  v13 = *v11;
  v14 = *((int *)v11 + 4);
  if ( *(_QWORD *)(v13 + 440) < v14 )
    goto LABEL_14;
  if ( *(_DWORD *)(*(_QWORD *)(v13 + 432) + 104 * v14) != 1 )
    return 0;
  v15 = v12[1];
  if ( !(_DWORD)v15 )
    return 0;
  v16 = *((_DWORD *)a2 + 1);
  if ( v16 == -1 )
    return 0;
  v6 = (int)v15 % v16;
  if ( (int)v15 % v16 )
    return 0;
  v17 = *(_QWORD *)(a1 + 32);
  if ( v17 != *(_QWORD *)(a1 + 24) )
    return 0;
  v18 = *(_QWORD *)(a1 + 8);
  v21[3] = *(_QWORD *)(a1 + 32);
  v21[4] = v17;
  v21[1] = v18;
  v19 = *(_QWORD *)(a1 + 16);
  v21[0] = &off_4DED70;
  v21[2] = v19;
  v20 = *((int *)v12 + 4);
  if ( *(_QWORD *)(*v12 + 440LL) < v20 )
LABEL_14:
    sub_226EC0(*(double *)a5.m128i_i64);
  if ( (unsigned __int8)sub_208540(
                          (__int64)v21,
                          (__int64)a2,
                          a4,
                          (int)v15,
                          *(_QWORD *)(*v12 + 432LL) + 104 * v20,
                          a5,
                          a6) )
  {
    ++*(_DWORD *)(a1 + 56);
    return 1;
  }
  return v6;
}

