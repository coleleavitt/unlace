__int64 __fastcall sub_42850(unsigned __int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edx
  unsigned __int64 v7; // rdi
  int v8; // r11d
  int v9; // eax
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  int v13; // ebp
  size_t v14; // rax
  __int64 v15; // r8
  size_t v16; // r10
  size_t v17; // r11
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-A0h]
  __int64 v29; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+10h] [rbp-98h]
  __int64 v31; // [rsp+10h] [rbp-98h]
  __int64 v32; // [rsp+18h] [rbp-90h]
  __int64 v33; // [rsp+18h] [rbp-90h]
  __int64 v34; // [rsp+20h] [rbp-88h]
  size_t v35; // [rsp+20h] [rbp-88h]
  size_t v36; // [rsp+28h] [rbp-80h]
  char s[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v5 = 0;
  if ( (char)a1 >= a4 )
  {
    if ( a2 )
    {
      v7 = a1 >> 8;
      a2[1] = 0;
      v8 = (char)v7;
      v9 = (int)a4 / (char)v7;
      v10 = v9;
      v11 = v9 * (__int64)(2 * (char)v7 + 1) - 1;
      if ( a2[2] < v11 )
      {
        v29 = v9;
        v27 = qvector_reserve((__int64)a2, *a2, v11, 1);
        v10 = v29;
        v8 = (char)v7;
        *a2 = v27;
      }
      if ( v10 )
      {
        v28 = v10;
        v12 = 0;
        v13 = v8;
        while ( 1 )
        {
          __memcpy_chk();
          if ( v13 == 16 )
            num2str_uint128();
          else
            b2a64();
          v14 = strlen(s);
          v15 = a2[1];
          v16 = v14;
          v17 = v14;
          if ( v15 )
          {
            --v15;
            v17 = v14 + v15;
          }
          v18 = *a2;
          v19 = v17 + 1;
          if ( a2[2] < v17 + 1 )
          {
            v36 = v14;
            v35 = v17;
            v33 = v15;
            v31 = v17 + 1;
            v26 = qvector_reserve((__int64)a2, v18, v19, 1);
            v16 = v36;
            v17 = v35;
            v15 = v33;
            v19 = v31;
            *a2 = v26;
            v18 = v26;
          }
          a2[1] = v19;
          ++v12;
          *(_BYTE *)(v18 + v17) = 0;
          memmove((void *)(v15 + *a2), s, v16);
          if ( v28 == v12 )
            return 1;
          v20 = a2[1];
          if ( v20 )
          {
            v21 = v20 + 1;
            v22 = a2[1];
            v23 = *a2;
            --v20;
            if ( a2[2] >= v21 )
              goto LABEL_16;
          }
          else
          {
            v23 = *a2;
            v22 = 1;
            v21 = 2;
            if ( (unsigned __int64)a2[2] >= 2 )
              goto LABEL_16;
          }
          v34 = v22;
          v32 = v20;
          v30 = v21;
          v25 = qvector_reserve((__int64)a2, v23, v21, 1);
          v22 = v34;
          v20 = v32;
          *a2 = v25;
          v21 = v30;
          v23 = v25;
LABEL_16:
          a2[1] = v21;
          a3 += (char)v7;
          *(_BYTE *)(v23 + v20) = 32;
          *(_BYTE *)(*a2 + v22) = 0;
        }
      }
    }
    return 1;
  }
  return v5;
}
