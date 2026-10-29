unsigned __int64 __fastcall sub_3F6B30(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, double a6)
{
  int v9; // ebx
  unsigned int dtype_size; // r14d
  char v11; // al
  int v12; // r9d
  int v13; // r13d
  unsigned __int8 dtype_by_size; // al
  int v15; // r14d
  unsigned __int64 result; // rax
  int v17; // r14d
  int v18; // edi
  int v19; // r15d
  int v20; // esi
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rax
  int *v24; // rdi
  __int64 (__fastcall *v25)(__int64, int); // rdx
  __int64 v26; // rsi
  int v27; // ecx
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // eax
  char v31; // al
  int v34; // [rsp+10h] [rbp-68h]
  int v35; // [rsp+10h] [rbp-68h]
  int v36; // [rsp+1Ch] [rbp-5Ch]
  int v37; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+24h] [rbp-54h]
  int v39; // [rsp+28h] [rbp-50h]
  int v40; // [rsp+2Ch] [rbp-4Ch]
  int v41; // [rsp+30h] [rbp-48h]
  int v42; // [rsp+34h] [rbp-44h]
  unsigned int v43; // [rsp+38h] [rbp-40h]
  bool v44; // [rsp+3Eh] [rbp-3Ah]
  unsigned __int8 v45; // [rsp+3Fh] [rbp-39h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && *(_BYTE *)(a5 + 34) == 0xFF )
    return sub_3F6940(a1, a3, a4, a5, a6);
  if ( a3 != 1 )
  {
    v9 = 1;
    sub_3EE110(a1, a5, a6);
    dtype_size = get_dtype_size();
    v11 = sub_3EE030(a1, a5);
    v40 = 1;
    v12 = a3;
    if ( v11 )
    {
      v30 = sub_3EE210(a1, a5, a6);
      v12 = a3;
      v40 = dtype_size / v30;
    }
    goto LABEL_6;
  }
  v9 = *(_DWORD *)(a5 + 8);
  v45 = sub_3EE110(a1, a5, a6);
  v13 = get_dtype_size();
  v31 = sub_3EE030(a1, a5);
  v40 = 1;
  v12 = 1;
  if ( !v31 )
  {
LABEL_6:
    v34 = v12;
    v13 = sub_3EE210(a1, a5, a6);
    dtype_by_size = get_dtype_by_size();
    v12 = v34;
    v45 = dtype_by_size;
  }
  v36 = 163;
  v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    v36 = 61;
  v35 = v12;
  v15 = *(unsigned __int16 *)(a5 + 6) - v36;
  result = sub_3EE270(a1, a5, a6);
  v37 = result;
  if ( v9 > 0 )
  {
    result = (unsigned int)(v15 + v9 + v35);
    v44 = v40 != 1 || v9 != 1;
    v43 = v15 + v9 + v35;
    if ( v40 > 0 )
    {
      v17 = v35 + v15;
      v18 = v35;
LABEL_12:
      while ( 2 )
      {
        v19 = 0;
        v20 = 0;
        v41 = v17 - v18;
        while ( v18 <= 0 )
        {
          ++v20;
          v19 += v13;
          if ( v40 == v20 )
          {
            result = v43;
            if ( ++v17 != v43 )
              goto LABEL_12;
            return result;
          }
        }
        v42 = v18;
        v21 = v20;
        do
        {
          v39 = v21;
          v22 = v41;
          do
          {
            v24 = *(int **)(a1 + 832);
            v25 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v24 + 168LL);
            v26 = (unsigned int)(v36 + v22 % 32);
            if ( v25 == sub_3EA010 )
            {
              v27 = sub_3EA010((__int64)v24, v26);
            }
            else
            {
              v29 = v25((__int64)v24, v26);
              v24 = *(int **)(a1 + 832);
              v27 = v29;
            }
            v28 = v19 + v37 + v27;
            if ( a2 == 1 )
              v23 = sub_3F56D0(a1, 1u, v45, v28, v24[16], a4, v38);
            else
              v23 = sub_3F56D0(a1, a2, v45, v24[16], a4, v28, v38);
            if ( v23 )
            {
              if ( v44 )
                *(_DWORD *)(v23 + 4) |= 0x10000u;
            }
            ++v22;
            sub_3F68B0(a1, a4, v13, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL));
          }
          while ( v22 != v17 );
          v19 += v13;
          v21 = v39 + 1;
        }
        while ( v40 != v39 + 1 );
        result = v43;
        ++v17;
        v18 = v42;
        if ( v17 != v43 )
          continue;
        break;
      }
    }
  }
  return result;
}

