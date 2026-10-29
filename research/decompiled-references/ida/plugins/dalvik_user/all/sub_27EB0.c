__int64 __fastcall sub_27EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 *a5, int a6)
{
  __int64 result; // rax
  __int32 v9; // ecx
  int v10; // r12d
  __int16 v11; // ax
  __int64 v12; // rsi
  __int32 v13; // ecx
  char v14; // si
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  char *v18; // rax
  __int32 v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+18h] [rbp-50h] BYREF
  __m128i v21[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h]
  unsigned __int64 v23; // [rsp+48h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  v20 = 0;
  v21[0].m128i_i64[0] = 0;
  v22 = 0;
  v21[1] = 0;
  result = sub_27DB0(a1, &v20, v21, a3, a4, a6);
  if ( !(_BYTE)result )
    return 0;
  if ( !a2 )
    return result;
  if ( v22 < *(_QWORD *)a2 || v22 >= *(int *)(a2 + 80) + *(_QWORD *)a2 )
  {
    *(_BYTE *)(a2 + 88) = 0;
    return 0;
  }
  *(_BYTE *)(a2 + 88) = 1;
  v9 = v21[0].m128i_i32[0];
  if ( a5 )
  {
    v10 = *a5;
  }
  else
  {
    v18 = &byte_7FAF1;
    if ( *(_QWORD *)(a2 + 40) )
      v18 = *(char **)(a2 + 32);
    v10 = (unsigned __int8)*v18;
  }
  v11 = word_7FB4A;
  *(_BYTE *)(a2 + 96) = v10;
  if ( v11 == 1 )
  {
    if ( *(int *)(a1 + 1072) <= 27 )
      goto LABEL_9;
    return sub_51F90(a1 + 864, a2);
  }
  if ( v11 != 2 )
    return sub_51F90(a1 + 864, a2);
LABEL_9:
  if ( (unsigned __int8)(v10 - 76) > 0x28u )
    return sub_51F90(a1 + 864, a2);
  v12 = 0x18108808001LL;
  if ( !_bittest64(&v12, (unsigned int)(v10 - 76)) )
    return sub_51F90(a1 + 864, a2);
  *(_BYTE *)(a2 + 96) = 73;
  v19 = v9;
  v14 = sub_51F90(a1 + 864, a2);
  v17 = *(_DWORD *)(a2 + 104);
  if ( v14 )
  {
    v13 = v19;
    if ( !v17 || (v17 & 7) == 0 && v17 > 0x100 )
    {
      *(_BYTE *)(a2 + 96) = v10;
      return sub_51F90(a1 + 864, a2);
    }
  }
  *(_BYTE *)(a2 + 96) = v10;
  sub_58110(a1, (unsigned int)"dalvik_debmod_t::update_var_slot() bad object ID=0x%x\n", v17, v13, v15, v16);
  return 0;
}

