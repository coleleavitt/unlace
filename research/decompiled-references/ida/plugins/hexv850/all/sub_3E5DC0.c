__int64 __fastcall sub_3E5DC0(_QWORD *a1, __int64 a2, __int64 a3, int a4, char a5, double a6)
{
  unsigned int v6; // r15d
  __int64 v8; // r13
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rbp
  __int64 v15; // rdi
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 4 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(v8 + 32) == 1 && a4 == *(_DWORD *)(v8 + 40) && (unsigned int)(*(_DWORD *)v8 - 12) <= 1 )
    {
      v6 = sub_154850(v8 + 48, &v17, 0);
      if ( (_BYTE)v6 )
      {
        if ( !(_WORD)v17 )
        {
          if ( *(_DWORD *)(get_ph() + 4) != 55 )
          {
            if ( !under_debugger )
              sub_37CFE0(0x291Cu, a6);
            BUG();
          }
          v19[0] = -1;
          sub_CB3B0();
          if ( v19[0] != -1 )
          {
            v11 = v19[0] - v17;
            if ( *(_DWORD *)v8 == 12 )
              v11 = v19[0] + v17;
            if ( (unsigned __int8)sub_11B1C0((char *)a3, &v18, 0) )
            {
              if ( !a5 )
              {
                *a1 = v11 - v18;
                return v6;
              }
              goto LABEL_27;
            }
            if ( a5 )
            {
              if ( *(_BYTE *)a3 == 4 )
              {
                v12 = *(_QWORD *)(a3 + 8);
                if ( *(_DWORD *)v12 == 8 && *(_DWORD *)(v12 + 36) == 2 && *(_BYTE *)(v12 + 32) == 4 )
                {
                  v13 = *(_QWORD *)(v12 + 40);
                  if ( *(_DWORD *)v13 == 10 && *(_BYTE *)(v13 + 32) == 4 )
                  {
                    v14 = *(_DWORD **)(v13 + 40);
                    if ( (unsigned int)(*v14 - 12) <= 1
                      && (unsigned __int8)sub_154850((__int64)(v14 + 8), &v18, 0)
                      && (unsigned __int8)sub_154850((__int64)(v14 + 12), v19, 0) )
                    {
                      v15 = v18 - v19[0];
                      if ( *v14 == 12 )
                        v15 = v18 + v19[0];
                      v18 = v15;
                      v18 = sub_325150(v15, 2, 1);
LABEL_27:
                      *a1 = v18 + v11;
                      return v6;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

