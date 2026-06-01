__int64 __fastcall sub_1F860(__int64 a1, unsigned int a2, __off64_t a3, unsigned __int64 *a4, int a5, char a6)
{
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ebp
  unsigned __int64 *v11; // r15
  int *v12; // rbx
  __int64 v13; // rcx
  int v14; // r13d
  int v15; // r14d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // rdx
  char v19; // r15
  int v20; // eax
  int v21; // r14d
  int v22; // [rsp+8h] [rbp-B0h]
  unsigned int v23; // [rsp+Ch] [rbp-ACh]
  size_t nbytes; // [rsp+18h] [rbp-A0h]
  __int64 v26; // [rsp+20h] [rbp-98h]
  char v28; // [rsp+2Fh] [rbp-89h]
  char file[72]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v23 = a2;
  v30 = __readfsqword(0x28u);
  result = 0;
  if ( *(_BYTE *)(a1 + 1349) )
    return result;
  v8 = a1;
  if ( *(_DWORD *)(a1 + 1340) == -1 )
    return result;
  v9 = a5;
  if ( a6 )
  {
    sub_1ED60(a1, 0, 1);
    if ( a2 == -1 )
      v23 = *(_DWORD *)(a1 + 1340);
    nbytes = v9;
    if ( (unsigned __int64)v9 > 0x18 )
    {
      v19 = a6;
      v10 = 0;
      goto LABEL_32;
    }
    if ( v9 )
    {
      v28 = a6;
      goto LABEL_20;
    }
    goto LABEL_13;
  }
  nbytes = a5;
  if ( a2 != -1 )
  {
    if ( (unsigned __int64)a5 > 0x18 )
    {
      v19 = 1;
      v10 = 0;
      goto LABEL_32;
    }
    if ( a5 )
    {
      v28 = 1;
      goto LABEL_20;
    }
    return result;
  }
  if ( (unsigned __int64)a5 > 0x18 )
  {
    v23 = *(_DWORD *)(a1 + 1340);
    v19 = 1;
    v10 = 0;
    goto LABEL_32;
  }
  if ( a5 )
  {
    v23 = *(_DWORD *)(a1 + 1340);
    v28 = 1;
LABEL_20:
    while ( 1 )
    {
      v10 = 0;
      v26 = v8;
      v11 = a4;
      v22 = v9;
      v12 = __errno_location();
      while ( 1 )
      {
        v14 = a3 & 7;
        *v12 = 0;
        v15 = v22 - v10;
        if ( v22 - v10 > 8 - v14 )
          v15 = 8 - v14;
        v16 = ptrace(PTRACE_PEEKTEXT, v23, a3 - (a3 & 7), 0);
        if ( *v12 )
          break;
        if ( v15 == 8 )
        {
          *v11 = v16;
          v13 = 8;
        }
        else
        {
          v17 = v16 >> (8 * (unsigned __int8)v14);
          v13 = v15;
          if ( v15 > 0 )
          {
            v13 = v15;
            v18 = v11;
            do
            {
              *(_BYTE *)v18 = v17;
              v18 = (unsigned __int64 *)((char *)v18 + 1);
              v17 >>= 8;
            }
            while ( (unsigned __int64 *)((char *)v11 + v15) != v18 );
          }
        }
        v11 = (unsigned __int64 *)((char *)v11 + v13);
        a3 += v13;
        v10 += v15;
        if ( v22 <= v10 )
        {
          v8 = v26;
          goto LABEL_9;
        }
      }
      v9 = v22;
      v8 = v26;
      if ( v22 <= v10 || !v28 )
        break;
      v19 = 0;
LABEL_32:
      qsnprintf();
      v20 = open(file, 0);
      v21 = v20;
      if ( v20 != -1 )
      {
        v10 = pread64(v20, a4, nbytes, a3);
        close(v21);
      }
      if ( v10 == v9 || !v19 )
        break;
      if ( v9 <= 0 )
      {
        result = 0;
        goto LABEL_11;
      }
      v28 = 0;
    }
LABEL_9:
    result = 0;
    if ( v10 >= 0 )
      result = (unsigned int)v10;
LABEL_11:
    if ( a6 )
    {
      v9 = result;
LABEL_13:
      sub_1F6B0(v8, 0, 1);
      return (unsigned int)v9;
    }
  }
  return result;
}

