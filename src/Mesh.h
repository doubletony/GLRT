#pragma once

namespace GLRT
{
    public ref class Mesh sealed
    {
    public:
        Mesh();
		int GetMagicNumber()
		{
			return 43;
		}
    };
}