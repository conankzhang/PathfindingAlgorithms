#pragma once

#include "DivisionScheme.h"

//=======================================================================================================================
class CTiledDivisionScheme : public CDivisionScheme
{
public:
	CTiledDivisionScheme(float InWidth, float InHeight);
	~CTiledDivisionScheme();

	virtual int Quantize(const ofVec2f& InPosition) const override;
	virtual ofVec2f Localize(int InNode) const override;

private:
	float Width;
	float Height;
};

