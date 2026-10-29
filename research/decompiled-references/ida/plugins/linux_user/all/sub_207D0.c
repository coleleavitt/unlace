__int64 __fastcall sub_207D0(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, int a5, int a6)
{
  int *v10; // rax
  int *v11; // r15
  int v12; // r14d
  unsigned int v13; // r8d
  int v14; // r10d
  int v15; // r8d
  __int64 v16; // rbp
  int v17; // r13d
  unsigned int i; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int *v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-78h]
  unsigned __int64 v25; // [rsp+8h] [rbp-70h]
  unsigned int v26; // [rsp+24h] [rbp-54h]
  int v27; // [rsp+28h] [rbp-50h]
  int v28; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v29[9]; // [rsp+30h] [rbp-48h]

  v26 = a2;
  v29[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 792) )
    sub_136C0();
  if ( (_BYTE)a6 )
  {
    sub_1ED60(a1, 0, 1);
    if ( a2 == -1 )
      v26 = *(_DWORD *)(a1 + 1340);
    v23 = __errno_location();
    *v23 = 0;
    v11 = v23;
    if ( a5 <= 0 )
    {
LABEL_19:
      sub_1F6B0(a1, 0, 1);
      return (unsigned int)a5;
    }
  }
  else
  {
    if ( a2 == -1 )
      v26 = *(_DWORD *)(a1 + 1340);
    v10 = __errno_location();
    *v10 = 0;
    v11 = v10;
    if ( a5 <= 0 )
      return (unsigned int)a5;
  }
  v28 = a5;
  v27 = a6;
  v12 = a5;
  while ( 1 )
  {
    v13 = 8;
    v24 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    v14 = a3 & 7;
    if ( (a3 & 7) != 0 )
    {
      v15 = 8 - v14;
      if ( 8 - v14 > v12 )
        v15 = v12;
      v16 = v15;
      v17 = v15;
      if ( v15 )
      {
        for ( i = 0; i < v15; ++i )
        {
          v19 = i;
          *((_BYTE *)v29 + v19) = *((_BYTE *)a4 + v19);
        }
      }
    }
    else
    {
      if ( v12 <= 8 )
        v13 = v12;
      v16 = (int)v13;
      v17 = v13;
      if ( v13 >= 8 )
      {
        *(_QWORD *)((char *)&v27 + v13) = *(_QWORD *)((char *)a4 + v13 - 8);
      }
      else if ( (v13 & 4) != 0 )
      {
        LODWORD(v29[0]) = *a4;
        *(int *)((char *)&v28 + v13) = *(_DWORD *)((char *)a4 + v13 - 4);
      }
      else
      {
        LOBYTE(v29[0]) = *(_BYTE *)a4;
        if ( (v13 & 2) != 0 )
          *(_WORD *)((char *)&v28 + v13 + 2) = *(_WORD *)((char *)a4 + v13 - 2);
      }
      if ( v12 > 7 )
      {
        v21 = v29[0];
        v16 = 8;
        v17 = 8;
        goto LABEL_16;
      }
    }
    v20 = ptrace(PTRACE_PEEKTEXT, v26, v24, 0);
    if ( *v11 )
      break;
    v21 = v20
        ^ (0xFFFFFFFFFFFFFFFFLL >> (8 * (8 - (unsigned __int8)v16)) << (8 * ((unsigned __int8)a3 & 7u)))
        & (v20
         ^ (v29[0] << (8 * ((unsigned __int8)a3 & 7u))));
    v29[0] = v21;
LABEL_16:
    *v11 = 0;
    v25 = v21;
    ptrace(PTRACE_POKETEXT, *(unsigned int *)(a1 + 1340), v24);
    if ( *v11 )
    {
      *v11 = 0;
      ptrace(PTRACE_POKEDATA, *(unsigned int *)(a1 + 1340), v24, v25);
      if ( *v11 )
        break;
    }
    v12 -= v17;
    a4 = (_DWORD *)((char *)a4 + v16);
    a3 += v16;
    if ( v12 <= 0 )
    {
      a5 = v28;
      if ( !(_BYTE)v27 )
        return (unsigned int)a5;
      goto LABEL_19;
    }
  }
  a5 = 0;
  if ( (_BYTE)v27 )
    goto LABEL_19;
  return (unsigned int)a5;
}

