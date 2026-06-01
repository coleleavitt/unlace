__int64 __fastcall sub_42850(unsigned __int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edx
  unsigned __int64 v7; // rdi
  int v8; // r11d
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // r14
  int v12; // ebp
  size_t v13; // rax
  __int64 v14; // r8
  size_t v15; // r10
  size_t v16; // r11
  __int64 v17; // rsi
  size_t v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-A0h]
  __int64 v28; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v29; // [rsp+10h] [rbp-98h]
  size_t v30; // [rsp+10h] [rbp-98h]
  __int64 v31; // [rsp+18h] [rbp-90h]
  __int64 v32; // [rsp+18h] [rbp-90h]
  __int64 v33; // [rsp+20h] [rbp-88h]
  size_t v34; // [rsp+20h] [rbp-88h]
  size_t v35; // [rsp+28h] [rbp-80h]
  char s[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v37 = __readfsqword(0x28u);
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
      if ( a2[2] < (unsigned __int64)(v9 * (__int64)(2 * (char)v7 + 1) - 1) )
      {
        v28 = v9;
        v26 = qvector_reserve();
        v10 = v28;
        v8 = (char)v7;
        *a2 = v26;
      }
      if ( v10 )
      {
        v27 = v10;
        v11 = 0;
        v12 = v8;
        while ( 1 )
        {
          __memcpy_chk();
          if ( v12 == 16 )
            num2str_uint128();
          else
            b2a64();
          v13 = strlen(s);
          v14 = a2[1];
          v15 = v13;
          v16 = v13;
          if ( v14 )
          {
            --v14;
            v16 = v13 + v14;
          }
          v17 = *a2;
          v18 = v16 + 1;
          if ( a2[2] < v16 + 1 )
          {
            v35 = v13;
            v34 = v16;
            v32 = v14;
            v30 = v16 + 1;
            v25 = qvector_reserve();
            v15 = v35;
            v16 = v34;
            v14 = v32;
            v18 = v30;
            *a2 = v25;
            v17 = v25;
          }
          a2[1] = v18;
          ++v11;
          *(_BYTE *)(v17 + v16) = 0;
          memmove((void *)(v14 + *a2), s, v15);
          if ( v27 == v11 )
            return 1;
          v19 = a2[1];
          if ( v19 )
          {
            v20 = v19 + 1;
            v21 = a2[1];
            v22 = *a2;
            --v19;
            if ( a2[2] >= v20 )
              goto LABEL_16;
          }
          else
          {
            v22 = *a2;
            v21 = 1;
            v20 = 2;
            if ( (unsigned __int64)a2[2] >= 2 )
              goto LABEL_16;
          }
          v33 = v21;
          v31 = v19;
          v29 = v20;
          v24 = qvector_reserve();
          v21 = v33;
          v19 = v31;
          *a2 = v24;
          v20 = v29;
          v22 = v24;
LABEL_16:
          a2[1] = v20;
          a3 += (char)v7;
          *(_BYTE *)(v22 + v19) = 32;
          *(_BYTE *)(*a2 + v21) = 0;
        }
      }
    }
    return 1;
  }
  return v5;
}

