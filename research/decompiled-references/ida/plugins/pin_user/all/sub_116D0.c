__int64 __fastcall sub_116D0(__int64 a1, unsigned int a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  unsigned __int64 v13; // rax
  char *v14; // r9
  __int64 v15; // r10
  int v16; // edx
  unsigned int v17; // ebx
  unsigned __int64 v19; // r10
  signed __int64 v20; // r9
  unsigned int v21; // edx
  unsigned int v22; // eax
  __int64 v23; // r11
  _BYTE v24[2744]; // [rsp+0h] [rbp-AE8h] BYREF
  unsigned __int64 v25; // [rsp+AB8h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  memset(v24, 0, 0xAB0u);
  if ( a4 )
  {
    v8 = a3;
    v9 = (_QWORD *)(a5 + 8);
    v10 = &v24[4];
    v11 = (int)a4 + (__int64)a3;
    do
    {
      v12 = *((_DWORD *)v9 - 2);
      if ( v12 < -1 )
      {
        v14 = (char *)v9;
        LODWORD(v13) = 8 * (v12 == -2);
      }
      else
      {
        v13 = v9[1];
        v14 = (char *)*v9;
        if ( v13 > 0x20 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
      }
      v15 = *(_QWORD *)(a1 + 664);
      v16 = -1;
      if ( v8 < *(_QWORD *)(v15 + 24) )
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 16) + 40 * v8 + 8);
      *((_DWORD *)v10 - 1) = v16;
      if ( (unsigned int)v13 >= 8 )
      {
        *v10 = *(_QWORD *)v14;
        *(_QWORD *)((char *)v10 + (unsigned int)v13 - 8) = *(_QWORD *)&v14[(unsigned int)v13 - 8];
        v19 = (unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v20 = v14 - ((char *)v10 - v19);
        if ( (((_DWORD)v13 + (_DWORD)v10 - (_DWORD)v19) & 0xFFFFFFF8) >= 8 )
        {
          v21 = (v13 + (_DWORD)v10 - v19) & 0xFFFFFFF8;
          v22 = 0;
          do
          {
            v23 = v22;
            v22 += 8;
            *(_QWORD *)(v19 + v23) = *(_QWORD *)(v20 + v23);
          }
          while ( v22 < v21 );
        }
      }
      else if ( (v13 & 4) != 0 )
      {
        *(_DWORD *)v10 = *(_DWORD *)v14;
        *(_DWORD *)((char *)v10 + (unsigned int)v13 - 4) = *(_DWORD *)&v14[(unsigned int)v13 - 4];
      }
      else if ( (_DWORD)v13 )
      {
        *(_BYTE *)v10 = *v14;
        if ( (v13 & 2) != 0 )
          *(_WORD *)((char *)v10 + (unsigned int)v13 - 2) = *(_WORD *)&v14[(unsigned int)v13 - 2];
      }
      ++v8;
      v10 = (_QWORD *)((char *)v10 + 36);
      v9 += 4;
    }
    while ( v8 != v11 );
  }
  qmutex_lock();
  v17 = sub_1C050(a1 + 952, a2, a4, v24);
  qmutex_unlock();
  return v17;
}

