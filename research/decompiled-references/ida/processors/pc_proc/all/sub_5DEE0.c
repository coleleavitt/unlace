__int64 __fastcall sub_5DEE0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5, __int64 a6, __int64 a7)
{
  const char **v12; // r10
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // edx
  int v16; // esi
  unsigned int v17; // edx
  unsigned int v18; // r12d
  int v19; // r13d
  int v20; // r13d
  __int64 v21; // rcx
  _BYTE *v22; // rbx
  char v23; // al
  _QWORD *v24; // rax
  _QWORD *v25; // rdx

  v12 = *(const char ***)(a1 + 5456);
  if ( v12 )
    goto LABEL_2;
  if ( !*(_QWORD *)(a1 + 5464) )
  {
    *(_QWORD *)(a1 + 5464) = 10;
    v24 = (_QWORD *)operator new[](0x148u);
    *v24 = 10;
    v12 = (const char **)(v24 + 1);
    v25 = v24 + 1;
    do
    {
      v25[3] = 0;
      v25 += 8;
      *(v25 - 1) = 0;
    }
    while ( v25 != v24 + 41 );
    *(_QWORD *)(a1 + 5456) = v12;
    v24[1] = xmmword_18C2E0;
    v24[40] = qword_18C418;
    qmemcpy(
      (void *)((unsigned __int64)(v24 + 2) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)((char *)&xmmword_18C2E0 - ((char *)v12 - ((unsigned __int64)(v24 + 2) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)v12 - (((_DWORD)v24 + 16) & 0xFFFFFFF8) + 320) >> 3));
LABEL_2:
    result = sub_5D410(a2, a3, a4, v12, *(_DWORD *)(a1 + 5464), a5);
    if ( (int)result > 0 )
    {
      if ( a6 )
      {
        if ( a7 )
        {
          if ( a2 )
          {
            v14 = *(_QWORD *)(a1 + 16);
            v15 = *(unsigned __int16 *)(a6 + 24);
            v16 = *(_DWORD *)(v14 + 104);
            if ( v16 <= v15 && *(_DWORD *)(v14 + 108) > v15 )
            {
              v17 = *(_DWORD *)(*(_QWORD *)(v14 + 112) + 16LL * (v15 - v16) + 8);
              if ( v17 > 0xFFFFFFF )
              {
                if ( -858993459 * (unsigned int)((a7 - (a6 + 40)) >> 3) )
                {
                  v18 = v17 & 0x40000000;
                  v19 = 0x10000000;
                }
                else
                {
                  v18 = v17 & 0x80000000;
                  v19 = 0x20000000;
                }
                result = a2[1];
                v20 = v17 & v19;
                v21 = *a2;
                v22 = (_BYTE *)*a2;
                if ( 24 * result )
                {
                  do
                  {
                    if ( (!v18 || (v23 = v22[18], (v23 & 0x3E) != 0) && (v23 & 0xFu) <= 8)
                      && (!v20 || (v22[18] & 0x3F) == 0x19) )
                    {
                      result = a2[1];
                      v22 += 24;
                    }
                    else
                    {
                      clear_tinfo_t();
                      memmove(v22, v22 + 24, *a2 + 24 * a2[1] - (_QWORD)v22 - 24);
                      v21 = *a2;
                      result = a2[1] - 1;
                      a2[1] = result;
                    }
                  }
                  while ( v22 != (_BYTE *)(v21 + 24 * result) );
                }
              }
            }
          }
        }
      }
    }
    return result;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_5E130(10374);
}

